/**
 * Author: Deean
 * Date: 2023-04-21 22:06
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 == str2 + str1) {
            return str1.substr(0, gcd(str1.size(), str2.size()));
        } else {
            return "";
        }
    }
};

int main() {
    auto ans = Solution().gcdOfStrings("ABCABC", "ABC");
    cout << toString(ans) << endl;
    return 0;
}
