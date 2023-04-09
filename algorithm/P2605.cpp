/**
 * Author: Deean
 * Date: 2023-04-09 19:55
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minNumber(vector<int> &nums1, vector<int> &nums2) {
        vector<int> digits(10);
        for (auto num: nums1) {
            digits[num] |= 1;
        }
        for (auto num: nums2) {
            digits[num] |= 2;
        }
        int min1 = 10, min2 = 10;
        for (int i = 1; i < 10; ++i) {
            if (digits[i] == 3) {
                return i;
            }
            if (digits[i] == 1) {
                min1 = min(min1, i);
            }
            if (digits[i] == 2) {
                min2 = min(min2, i);
            }
        }
        return min(min1, min2) * 10 + max(min1, min2);
    }
};

int main() {
    vector<int> nums1 = stringToVector("[4,1,3]");
    vector<int> nums2 = stringToVector("[5,7]");
    auto ans = Solution().minNumber(nums1, nums2);
    cout << toString(ans) << endl;
    return 0;
}
