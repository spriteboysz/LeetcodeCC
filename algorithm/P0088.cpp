/**
 * Author: Deean
 * Date: 2023-04-28 22:18
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        for (int i = 0; i < n; ++i) {
            nums1[i + m] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
        cout << toString(nums1) << endl;
    }
};

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}, nums2 = {2, 5, 6};
    Solution().merge(nums1, 3, nums2, 3);
    return 0;
}
