/**
 * Author: Deean
 * Date: 2022-10-09 23:55
 * FileName: algorithm/P0415.cpp
 * Description: 415. 字符串相加
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        string sum = "";
        int carry = 0;
        while (num1.size() > 0 || num2.size() > 0 || carry > 0) {
            if (num1.size() > 0) {
                carry += num1.at(num1.size() - 1) - '0';
                num1.pop_back();
            }
            if (num2.size() > 0) {
                carry += num2.at(num2.size() - 1) - '0';
                num2.pop_back();
            }
            sum.push_back('0' + carry % 10);
            carry /= 10;
        }
        reverse(sum.begin(), sum.end());
        return sum;
    }
};

int main() {
    auto ans = Solution().addStrings("456", "77");
    cout << toString(ans) << endl;
    ans = Solution().addStrings("9999", "3");
    cout << toString(ans) << endl;
    return 0;
}