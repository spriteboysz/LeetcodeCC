/**
 * Author: Deean
 * Date: 2023-07-23 15:20
 * FileName: algorithm
 * Description:278. 第一个错误的版本
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isBadVersion(int version){
        if (version >= 4) {
            return true;
        }
        return false;
    }

    int firstBadVersion(int n) {
        int left = 1, right = n;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (isBadVersion(mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};

int main() {
    auto ans = Solution().firstBadVersion(5);
    cout << toString(ans) << endl;
    return 0;
}
