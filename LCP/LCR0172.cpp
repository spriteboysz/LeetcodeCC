/**
 * Author: Deean
 * Date: 2023-10-14 17:03
 * FileName: LCP
 * Description: LCR 172. 统计目标成绩的出现次数
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int countTarget(vector<int> &scores, int target) {
        int cnt = 0;
        for (const auto &score: scores) {
            if (score == target) {
                cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    vector<int> scores = {2, 2, 3, 4, 4, 4, 5, 6, 6, 8};
    auto ans = Solution().countTarget(scores, 4);
    cout << toString(ans) << endl;
    return 0;
}