/**
 * Author: Deean
 * Date: 2023-04-25 23:00
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";
        bool flag = num < 0;
        num = abs(num);
        string digits;
        while (num) {
            digits.push_back(num % 7 + '0');
            num /= 7;
        }
        if (flag) {
            digits.push_back('-');
        }
        reverse(digits.begin(), digits.end());
        return digits;
    }
};

int main() {
    auto ans = Solution().convertToBase7(100);
    cout << toString(ans) << endl;
    return 0;
}
