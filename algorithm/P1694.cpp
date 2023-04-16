/**
 * Author: Deean
 * Date: 2023-04-16 19:36
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string reformatNumber(string number) {
        string digits = "";
        for (char c: number) {
            if (isdigit(c)) digits.push_back(c);
        }
        string ss = "";
        for (int pos = 0, n = digits.size(); n > 0; pos += 3, n -= 3) {
            if (n > 4) {
                ss += digits.substr(pos, 3) + "-";
            } else {
                if (n == 4) {
                    ss += digits.substr(pos, 2) + "-" + digits.substr(pos + 2, 2);
                } else {
                    ss += digits.substr(pos, n);
                }
                break;
            }
        }
        return ss;
    }
};

int main() {
    auto ans = Solution().reformatNumber("123 4-567");
    cout << toString(ans) << endl;
    return 0;
}
