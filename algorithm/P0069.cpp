/**
 * Author: Deean
 * Date: 2023-04-29 12:01
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int left = 0, right = x, num = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if ((long long) mid * mid <= x) {
                num = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return num;
    }
};

int main() {
    auto ans = Solution().mySqrt(8);
    cout << toString(ans) << endl;
    return 0;
}
