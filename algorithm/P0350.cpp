/**
 * Author: Deean
 * Date: 2023-04-27 22:55
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
        vector<int> hash1(1001, 0), hash2(1001, 0);
        for (auto num: nums1) {
            hash1[num]++;
        }
        for (auto num: nums2) {
            hash2[num]++;
        }
        vector<int> set;
        for (int i = 0; i <= 1000; ++i) {
            for (int j = 0; j < min(hash1[i], hash2[i]); ++j) {
                set.push_back(i);
            }
        }
        return set;
    }
};

int main() {
    vector<int> nums1 = {1, 2, 2, 1}, nums2 = {2, 2};
    auto ans = Solution().intersect(nums1, nums2);
    cout << toString(ans) << endl;
    return 0;
}
