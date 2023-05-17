/**
 * Author: Deean
 * Date: 2023-05-17 23:56
 * FileName: algorithm
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
        paths.push_back(path);
        for (int i = pos, n = nums.size(); i < n; ++i) {
            if (i > 0 && nums[i - 1] == nums[i] && !visited[i - 1]) {
                continue;
            }
            path.push_back(nums[i]);
            visited[i] = 1;
            backtrace(nums, i + 1);
            visited[i] = 0;
            path.pop_back();
        }
    }

    vector <vector<int>> subsetsWithDup(vector<int> &nums) {
        paths.clear();
        path.clear();
        visited.resize(nums.size());
        sort(nums.begin(), nums.end());
        backtrace(nums, 0);
        return paths;
    }
};

int main() {
    vector<int> nums = {1, 2, 2};
    auto ans = Solution().subsetsWithDup(nums);
    cout << toString(ans) << endl;
    return 0;
}
