/**
 * Author: Deean
 * Date: 2023-04-13 22:47
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> answerQueries(vector<int> &nums, vector<int> &queries) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> acc(n + 1);
        for (int i = 0; i < n; ++i) {
            acc[i + 1] = acc[i] + nums[i];
        }
        vector<int> answer;
        for (auto &query: queries) {
            answer.push_back(upper_bound(acc.begin(), acc.end(), query) - acc.begin() - 1);
        }
        return answer;
    }
};

int main() {
    vector<int> nums = {4, 5, 2, 1};
    vector<int> queries = {3, 10, 21};
    auto ans = Solution().answerQueries(nums, queries);
    cout << toString(ans) << endl;
    return 0;
}
