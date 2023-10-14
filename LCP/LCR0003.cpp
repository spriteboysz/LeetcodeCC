/**
 * Author: Deean
 * Date: 2023-10-10 23:33
 * FileName: LCP
 * Description: LCR 003. 比特位计数
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> vec;
        for (int i = 0; i <= n; ++i) {
            int num = i, cnt = 0;
            while (num) {
                num &= num - 1;
                cnt += 1;
            }
            vec.push_back(cnt);
        }
        return vec;
    }
};

int main() {
    auto ans = Solution().countBits(5);
    cout << toString(ans) << endl;
    return 0;
}