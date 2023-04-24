/**
 * Author: Deean
 * Date: 2023-04-23 21:43
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int calPoints(vector <string> &operations) {
        int point = 0;
        vector<int> stack;
        for (auto operation: operations) {
            int n = stack.size();
            switch (operation[0]) {
                case '+':
                    point += stack[n - 1] + stack[n - 2];
                    stack.push_back(stack[n - 1] + stack[n - 2]);
                    break;
                case 'D':
                    point += 2 * stack[n - 1];
                    stack.push_back(2 * stack[n - 1]);
                    break;
                case 'C':
                    point -= stack[n - 1];
                    stack.pop_back();
                    break;
                default:
                    point += stoi(operation);
                    stack.push_back(stoi(operation));
            }
        }
        return point;
    }
};

int main() {
    vector <string> operations = {"5", "-2", "4", "C", "D", "9", "+", "+"};
    auto ans = Solution().calPoints(operations);
    cout << toString(ans) << endl;
    return 0;
}
