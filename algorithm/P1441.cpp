/**
 * Author: Deean
 * Date: 2023-05-14 11:58
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <string> buildArray(vector<int> &target, int n) {
        vector <string> operators;
        int prev = 0;
        for (auto num: target) {
            for (int i = 0; i < num - prev - 1; ++i) {
                operators.push_back("Push");
                operators.push_back("Pop");
            }
            operators.push_back("Push");
            prev = num;
        }
        for (int i = prev; i < n; ++i) {
            operators.push_back("Push");
            operators.push_back("Pop");
        }
        return operators;
    }
};

int main() {
    vector<int> target = {1, 3};
    auto ans = Solution().buildArray(target, 4);
    cout << toString(ans) << endl;
    return 0;
}
