/**
 * Author: Deean
 * Date: 2023-05-08 23:35
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int> &nums, int k) {
        unordered_map<int, int> hash;
        unordered_set<int> set;
        for (auto num: nums) {
            set.insert(num);
            hash[num]++;
        }
        vector<int> keys;
        for (auto num: set) {
            keys.push_back(num);
        }
        sort(keys.begin(), keys.end(), [&](int a, int b) {
            return hash[a] > hash[b];
        });
        while (keys.size() > k) keys.pop_back();
        return keys;
    }
};

int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    auto ans = Solution().topKFrequent(nums, 2);
    cout << toString(ans) << endl;
    return 0;
}
