/**
 * Author: Deean
 * Date: 2023-05-10 21:37
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    vector <string> simplifiedFractions(int n) {
        vector <string> fractions;
        for (int b = 2; b <= n; ++b) {
            for (int a = 1; a < b; ++a) {
                if (gcd(a, b) == 1) {
                    fractions.push_back(to_string(a) + "/" + to_string(b));
                }
            }
        }
        return fractions;
    }
};

int main() {
    auto ans = Solution().simplifiedFractions(4);
    cout << toString(ans) << endl;
    return 0;
}
