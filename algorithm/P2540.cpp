/**
 * Author: Deean
 * Date: 2023-04-10 23:04
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int getCommon(vector<int> &nums1, vector<int> &nums2) {
        for (int i = 0, j = 0; i < nums1.size() && j < nums2.size();) {
            if (nums1[i] < nums2[j]) {
                i++;
            } else if (nums1[i] > nums2[j]) {
                j++;
            } else {
                return nums1[i];
            }
        }
        return -1;
    }
};

int main() {
    vector<int> nums1 = {1, 2, 3}, nums2 = {2, 4};
    auto ans = Solution().getCommon(nums1, nums2);
    cout << toString(ans) << endl;
    return 0;
}
