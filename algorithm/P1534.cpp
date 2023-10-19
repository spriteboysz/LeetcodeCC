/**
 * Author: Deean
 * Date: 2022-09-04 17:14
 * FileName: algorithm/P1534.cpp
 * Description: 1534. 统计好三元组
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int countGoodTriplets(vector<int> &arr, int a, int b, int c) {
        int cnt = 0, n = arr.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (abs(arr[i] - arr[j]) > a) continue;
                for (int k = j + 1; k < n; ++k) {
                    if (abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c) cnt++;
                }
            }
        }
        return cnt;
    }
};

int main() {
    vector<int> arr = {3, 0, 1, 1, 9, 7};
    auto ans = Solution().countGoodTriplets(arr, 7, 2, 3);
    cout << ans << endl;
    return 0;
}