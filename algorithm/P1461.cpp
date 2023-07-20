/**
 * Author: Deean
 * Date: 2023-07-20 22:51
 * FileName: algorithm
 * Description:1461. 检查一个字符串是否包含所有长度为 K 的二进制子串
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set <string> visited;
        for (int i = 0, n = s.size(); i + k <= n; ++i) {
            visited.emplace(s.substr(i, k));
        }
        return visited.size() == (1 << k);
    }
};

int main() {
    auto ans = Solution().hasAllCodes("00110110", 2);
    cout << toString(ans) << endl;
    return 0;
}
