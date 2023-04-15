/**
 * Author: Deean
 * Date: 2023-04-15 08:29
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool static cmp(const int &a, const int &b) {
        return a > b;
    }

    vector<int> sortEvenOdd(vector<int> &nums) {
        vector<int> even, odd;
        for (int i = 0, n = nums.size(); i < n; ++i) {
            if (i % 2 == 0) {
                even.push_back(nums[i]);
            } else {
                odd.push_back(nums[i]);
            }
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end(), cmp);
        int pos1 = 0, pos2 = 0;
        vector<int> sorted;
        for (int i = 0, n = nums.size(); i < n; ++i) {
            if (i % 2 == 0) {
                sorted.push_back(even[pos1++]);
            } else {
                sorted.push_back(odd[pos2++]);
            }
        }
        return sorted;
    }
};

int main() {
    vector<int> nums = {4, 1, 2, 3};
    auto ans = Solution().sortEvenOdd(nums);
    cout << toString(ans) << endl;
    return 0;
}
