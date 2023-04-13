/**
 * Author: Deean
 * Date: 2023-04-13 23:12
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string removeDigit(string number, char digit) {
        int n = number.size();
        string maximum;
        for (int i = 0; i < n; ++i) {
            if (number[i] == digit) {
                string temp = number.substr(0, i);
                temp.append(number.substr(i + 1, n - 1));
                maximum = max(maximum, temp);
            }
        }
        return maximum;
    }
};

int main() {
    auto ans = Solution().removeDigit("1231", '1');
    cout << toString(ans) << endl;
    return 0;
}
