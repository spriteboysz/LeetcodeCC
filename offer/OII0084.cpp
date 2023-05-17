/**
 * Author: Deean
 * Date: 2023-05-17 23:18
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<int>> paths;
    vector<int> path;
    vector<int> visited;

    void backtrace(vector<int> nums, int pos) {
        if (pos == nums.size()) {
            paths.push_back(path);
            return;
        }
        for (int i = 0, n = nums.size(); i < n; ++i) {
            if (visited[i] || (i > 0 && nums[i] == nums[i - 1] && !visited[i - 1])) {
                continue;
            }
            path.push_back(nums[i]);
            visited[i] = 1;
            backtrace(nums, pos + 1);
            visited[i] = 0;
            path.pop_back();
        }
    }

    vector <vector<int>> permuteUnique(vector<int> &nums) {
        paths.clear();
        path.clear();
        visited.resize(nums.size());
        sort(nums.begin(), nums.end());
        backtrace(nums, 0);
        return paths;
    }
};

int main() {
    vector<int> nums = {3, 3, 0, 3};
    auto ans = Solution().permuteUnique(nums);
    cout << toString(ans) << endl;
    return 0;
}
