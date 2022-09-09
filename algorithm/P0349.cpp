/**
 * Author: Deean
 * Date: 2022-09-10 00:06
 * FileName: algorithm/P0349.cpp
 * Description: 349. 两个数组的交集
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        vector<int> vec;
        for (auto num: set1) {
            if (set2.count(num)) vec.push_back(num);
        }
        return vec;
    }
};

int main() {
    vector<int> nums1 = {4, 9, 5}, nums2 = {9, 4, 9, 8, 4};
    auto ans = Solution().intersection(nums1, nums2);
    cout << toString(ans) << endl;
    return 0;
}