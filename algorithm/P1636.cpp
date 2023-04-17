/**
 * Author: Deean
 * Date: 2023-04-17 23:13
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool static cmp(pair<int, int> kv1, pair<int, int> kv2) {
        if (kv1.second == kv2.second) {
            return kv1.first > kv2.first;
        }
        return kv1.second < kv2.second;
    }

    vector<int> frequencySort(vector<int> &nums) {
        unordered_map<int, int> frequency;
        for (auto num: nums) {
            frequency[num]++;
        }
        vector <pair<int, int>> kv;
        for (auto item: frequency) {
            kv.push_back({item.first, item.second});
        }
        sort(kv.begin(), kv.end(), cmp);
        nums.clear();
        for (auto item: kv) {
            for (int i = 0; i < item.second; ++i) {
                nums.push_back(item.first);
            }
        }
        return nums;
    }
};

int main() {
    vector<int> nums = {1, 1, 2, 2, 2, 3};
    auto ans = Solution().frequencySort(nums);
    cout << toString(ans) << endl;
    return 0;
}
