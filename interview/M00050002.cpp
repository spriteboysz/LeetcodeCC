/**
 * Author: Deean
 * Date: 2023-05-12 23:11
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string printBin(double num) {
        string ret = "0.";
        while (ret.size() <= 32 && num != 0) {
            num *= 2;
            int digit = num;
            ret.push_back('0' + digit);
            num -= digit;
        }
        return ret.size() <= 32 ? ret : "ERROR";
    }
};

int main() {
    auto ans = Solution().printBin(0.625);
    cout << toString(ans) << endl;
    return 0;
}
