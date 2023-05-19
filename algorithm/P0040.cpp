/**
 * Author: Deean
 * Date: 2023-05-18 22:51
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<vector<int>> paths;
    vector<int> path;

    void backtrace(vector<int> &candidates, int target, int sum, int pos) {
        if (sum == target) {
            paths.push_back(path);
            return;
        }
        for (int i = pos, n = candidates.size(); i < n && candidates[i] + sum <= target; ++i) {
            if (i > pos && candidates[i] == candidates[i - 1]) continue;
            sum += candidates[i];
            path.push_back(candidates[i]);
            backtrace(candidates, target, sum, i + 1);
            sum -= candidates[i];
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
        paths.clear();
        path.clear();
        sort(candidates.begin(), candidates.end());
        backtrace(candidates, target, 0, 0);
        return paths;
    }
};

int main() {
    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    auto ans = Solution().combinationSum2(candidates, 8);
    cout << toString(ans) << endl;
    return 0;
}
