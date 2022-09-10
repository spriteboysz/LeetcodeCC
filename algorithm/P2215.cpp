/**
 * Author: Deean
 * Date: 2022-09-10 15:01
 * FileName: algorithm/P2215.cpp
 * Description: 2215. 找出两数组的不同
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2) {
        unordered_set<int> set1, set2;
        for (auto num: nums1) set1.insert(num);
        for (auto num: nums2) set2.insert(num);
        vector<int> vec1, vec2;
        for (auto num: set1) {
            if (set2.count(num) == 0) vec1.push_back(num);
        }
        for (auto num: set2) {
            if (set1.count(num) == 0) vec2.push_back(num);
        }
        return {vec1, vec2};
    }
};

int main() {
    vector<int> nums1 = {1, 2, 3, 3}, nums2 = {1, 1, 2, 2};
    auto ans = Solution().findDifference(nums1, nums2);
    cout << toString(ans) << endl;
    return 0;
}