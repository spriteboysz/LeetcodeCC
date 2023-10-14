/**
 * Author: Deean
 * Date: 2023-10-13 23:24
 * FileName: LCP
 * Description: LCR 139. 训练计划 I
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> trainingPlan(vector<int> &actions) {
        std::sort(actions.begin(), actions.end(), [&](int a, int b) -> bool {
            return a % 2 > b % 2;
        });
        return actions;
    }
};

int main() {
    vector<int> actions = {1, 2, 3, 4, 5};
    auto ans = Solution().trainingPlan(actions);
    cout << toString(ans) << endl;
    return 0;
}