/**
 * Author: Deean
 * Date: 2022-09-10 16:48
 * FileName: algorithm/P1550.cpp
 * Description: 1550. 存在连续三个奇数的数组
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int> &arr) {
        int n = arr.size();
        for (int i = 0; i <= n - 3; ++i) {
            if (arr[i] % 2 == 1 && arr[i + 1] % 2 == 1 && arr[i + 2] % 2 == 1) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    vector<int> arr = {1, 2, 34, 3, 4, 5, 7, 23};
    auto ans = Solution().threeConsecutiveOdds(arr);
    cout << toString(ans) << endl;
    return 0;
}