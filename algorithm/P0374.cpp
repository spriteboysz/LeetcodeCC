/**
 * Author: Deean
 * Date: 2023-04-27 22:48
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int guess(int num) {
        if (num > 6) {
            return -1;
        } else if (num < 6) {
            return 1;
        } else {
            return 0;
        }
    }

    int guessNumber(int n) {
        int left = 1, right = n;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (guess(mid) <= 0) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};

int main() {
    auto ans = Solution().guessNumber(10);
    cout << toString(ans) << endl;
    return 0;
}
