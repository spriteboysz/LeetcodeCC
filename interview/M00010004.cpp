/**
 * Author: Deean
 * Date: 2023-04-30 16:47
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool canPermutePalindrome(string s) {
        unordered_map<char, int> hash;
        for (auto c: s) {
            hash[c]++;
        }
        int odd = 0;
        for (auto [k, v]: hash) {
            if (v % 2 == 1) {
                odd++;
            }
        }
        return odd <= 1;
    }
};

int main() {
    auto ans = Solution().canPermutePalindrome("tactcoa");
    cout << toString(ans) << endl;
    return 0;
}
