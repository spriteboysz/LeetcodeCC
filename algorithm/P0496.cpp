/**
 * Author: Deean
 * Date: 2023-04-25 23:10
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
        unordered_map<int, int> hash;
        for (int i = 0, n = nums2.size(); i < n; ++i) {
            hash[nums2[i]] = i;
        }
        vector<int> greater;
        for (auto num: nums1) {
            bool flag = true;
            for (int i = hash[num] + 1, n = nums2.size(); i < n; ++i) {
                if (nums2[i] > num) {
                    flag = false;
                    greater.push_back(nums2[i]);
                    break;
                }
            }
            if (flag) greater.push_back(-1);
        }
        return greater;
    }
};

int main() {
    vector<int> nums1 = {4, 1, 2}, nums2 = {1, 3, 4, 2};
    auto ans = Solution().nextGreaterElement(nums1, nums2);
    cout << toString(ans) << endl;
    return 0;
}
