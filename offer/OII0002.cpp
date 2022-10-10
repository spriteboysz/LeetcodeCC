/**
 * Author: Deean
 * Date: 2022-10-10 23:00
 * FileName: offer/OII0002.cpp
 * Description: 
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string sum = "";
        int carry = 0;
        while (a.size() > 0 || b.size() > 0 || carry > 0) {
            if (a.size() > 0) {
                carry += a.at(a.size() - 1) - '0';
                a.pop_back();
            }
            if (b.size() > 0) {
                carry += b.at(b.size() - 1) - '0';
                b.pop_back();
            }
            sum.push_back(carry % 2 + '0');
            carry >>= 1;
        }
        reverse(sum.begin(), sum.end());
        return sum;
    }
};

int main() {
    auto ans = Solution().addBinary("1011", "1011");
    cout << toString(ans) << endl;
    return 0;
}