/**
 * Author: Deean
 * Date: 2023-05-14 22:20
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector<int> &r) {
        vector<bool> arithmetic;
        vector<int> vec;
        for (int i = 0, n = l.size(); i < n; ++i) {
            bool flag = true;
            if (r[i] - l[i] == 1) {
                arithmetic.push_back(flag);
                continue;
            }
            vec.clear();
            for (int j = l[i]; j <= r[i]; ++j) {
                vec.push_back(nums[j]);
            }
            sort(vec.begin(), vec.end());
            int diff = vec[1] - vec[0];
            for (int j = 2, m = vec.size(); j < m; ++j) {
                if (vec[j] - vec[j - 1] != diff) {
                    flag = false;
                    break;
                }
            }
            arithmetic.push_back(flag);
        }
        return arithmetic;
    }
};

int main() {
    vector<int> nums = {4, 6, 5, 9, 3, 7};
    vector<int> left = {0, 0, 2}, right = {2, 3, 5};
    auto ans = Solution().checkArithmeticSubarrays(nums, left, right);
    cout << toString(ans) << endl;
    return 0;
}
