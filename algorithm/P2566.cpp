/**
 * Author: Deean
 * Date: 2023-04-09 22:38
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minMaxDifference(int num) {
        string ss = to_string(num);
        char target = ss[0];
        string temp = ss;
        for (auto &digit: temp) {
            if (digit == target) digit = '0';
        }
        int minimum = stoi(temp);
        temp = ss;
        for (auto &digit: temp) {
            if (digit != '9') {
                target = digit;
                break;
            }
        }
        for (auto &digit: temp) {
            if (digit == target) digit = '9';
        }
        int maximum = stoi(temp);
        return maximum - minimum;
    }
};

int main() {
    auto ans = Solution().minMaxDifference(11891);
    cout << toString(ans) << endl;
    return 0;
}
