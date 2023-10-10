/**
 * Author: Deean
 * Date: 2023-10-10 23:05
 * FileName: LCP
 * Description:
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int pos1 = a.length() - 1, pos2 = b.length() - 1, carry = 0;
        vector<int> vec;
        while (pos1 >= 0 || pos2 >= 0 || carry > 0) {
            if (pos1 >= 0) {
                carry += a[pos1] - '0';
                pos1--;
            }
            if (pos2 >= 0) {
                carry += b[pos2] - '0';
                pos2--;
            }
            vec.push_back(carry % 2);
            carry /= 2;
        }
        string ss = "";
        for (int i = vec.size() - 1; i >= 0; i--) {
            ss += to_string(vec[i]);
        }
        return ss;
    }
};

int main() {
    auto ans = Solution().addBinary("1111", "1");
    cout << toString(ans) << endl;
    return 0;
}