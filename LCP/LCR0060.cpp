/**
 * Author: Deean
 * Date: 2023-10-12 23:33
 * FileName: LCP
 * Description: LCR 060. 前 K 个高频元素
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    static bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int> &nums, int k) {
        unordered_map<int, int> map;
        for (const auto &num: nums) {
            map[num]++;
        }
        vector <pair<int, int>> pairs;
        for (pair<int, int> e: map) {
            pairs.push_back(e);
        }
        sort(pairs.begin(), pairs.end(), cmp);
        vector<int> top;
        for (int i = 0; i < k; i++) {
            top.push_back(pairs[i].first);
        }
        return top;
    }
};

int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    auto ans = Solution().topKFrequent(nums, 2);
    cout << toString(ans) << endl;
    return 0;
}