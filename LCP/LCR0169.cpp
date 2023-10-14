/**
 * Author: Deean
 * Date: 2023-10-14 16:56
 * FileName: LCP
 * Description: LCR 169. 招式拆解 II
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    char dismantlingAction(string arr) {
        unordered_map<char, int> map;
        for (const auto &c: arr) {
            map[c]++;
        }
        for (const auto &c: arr) {
            if (map[c] == 1) {
                return c;
            }
        }
        return ' ';
    }
};

int main() {
    auto ans = Solution().dismantlingAction("abbccdeff");
    cout << toString(ans) << endl;
    return 0;
}