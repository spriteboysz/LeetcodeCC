/**
 * Author: Deean
 * Date: 2023-10-14 17:22
 * FileName: LCP
 * Description: LCR 178. 训练计划 VI
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int trainingPlan(vector<int> &actions) {
        unordered_map<int, int> map;
        for (const auto &action: actions) {
            map[action]++;
        }
        for (const auto &pair: map) {
            if (pair.second == 1) {
                return pair.first;
            }
        }
        return -1;
    }
};

int main() {
    vector<int> actions = {12, 1, 6, 12, 6, 12, 6};
    auto ans = Solution().trainingPlan(actions);
    cout << toString(ans) << endl;
    return 0;
}