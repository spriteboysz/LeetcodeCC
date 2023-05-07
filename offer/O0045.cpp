/**
 * Author: Deean
 * Date: 2023-05-07 17:02
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string minNumber(vector<int> &nums) {
        sort(nums.begin(), nums.end(), [&](const int a, const int b) {
            return to_string(a) + to_string(b) < to_string(b) + to_string(a);
        });
        string ret = "";
        for (auto num: nums) {
            ret += to_string(num);
        }
        return ret;
    }
};

int main() {
    vector<int> nums = {3, 30, 34, 5, 9};
    auto ans = Solution().minNumber(nums);
    cout << toString(ans) << endl;
    return 0;
}
