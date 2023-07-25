/**
 * Author: Deean
 * Date: 2023-07-24 22:55
 * FileName: algorithm
 * Description:13. 罗马数字转整数
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
private:
    unordered_map<char, int> symbolValues = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
    };

public:
    int romanToInt(string s) {
        int num = 0, n = s.length();
        for (int i = 0; i < n; ++i) {
            int value = symbolValues[s[i]];
            if (i < n - 1 && value < symbolValues[s[i + 1]]) {
                num -= value;
            } else {
                num += value;
            }
        }
        return num;
    }
};

int main() {
    auto ans = Solution().romanToInt("MCMXCIV");
    cout << toString(ans) << endl;
    return 0;
}
