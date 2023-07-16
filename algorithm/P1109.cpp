/**
 * Author: Deean
 * Date: 2023-07-16 11:58
 * FileName: algorithm
 * Description:1109. 航班预订统计
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> corpFlightBookings(vector <vector<int>> &bookings, int n) {
        vector<int> nums(n);
        for (auto &booking: bookings) {
            nums[booking[0] - 1] += booking[2];
            if (booking[1] < n) {
                nums[booking[1]] -= booking[2];
            }
        }
        for (int i = 1; i < n; ++i) {
            nums[i] += nums[i - 1];
        }
        return nums;
    }
};

int main() {
    auto bookings = stringToVector2("[[1,2,10],[2,3,20],[2,5,25]]");
    auto ans = Solution().corpFlightBookings(bookings, 5);
    cout << toString(ans) << endl;
    return 0;
}
