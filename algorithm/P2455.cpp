/**
 * Author: Deean
 * Date: 2023-04-11 23:48
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int averageValue(vector<int> &nums) {
        int sum = 0, cnt = 0;
        for (const auto &num: nums) {
            if (num % 6 == 0) {
                sum += num;
                cnt++;
            }
        }
        return cnt == 0 ? 0 : sum / cnt;
    }
};

int main() {
    vector<int> nums = {1, 3, 6, 10, 12, 15};
    auto ans = Solution().averageValue(nums);
    cout << toString(ans) << endl;
    return 0;
}
