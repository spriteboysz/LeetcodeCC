/**
 * Author: Deean
 * Date: 2023-05-07 12:08
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string largestNumber(vector<int> &nums) {
        sort(nums.begin(), nums.end(), [&](const int a, const int b) {
            return to_string(a) + to_string(b) > to_string(b) + to_string(a);
        });
        if (nums[0] == 0) return "0";
        string ss = "";
        for (auto num: nums) {
            ss += to_string(num);
        }
        return ss;
    }
};

int main() {
    vector<int> nums = {3, 30, 34, 5, 9};
    auto ans = Solution().largestNumber(nums);
    cout << toString(ans) << endl;
    return 0;
}
