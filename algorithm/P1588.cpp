/**
 * Author: Deean
 * Date: 2022-09-02 22:58
 * FileName: algorithm/P1588.cpp
 * Description: 1588. 所有奇数长度子数组的和
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int sumOddLengthSubarrays(vector<int> &arr) {
        int sum = 0, n = arr.size();
        for (int start = 0; start < n; start++) {
            for (int len = 1; start + len <= n; len += 2) {
                for (int i = start; i < start + len; i++) {
                    sum += arr[i];
                }
            }
        }
        return sum;
    }
};

int main() {
    vector<int> arr = {10, 11, 12};
    auto ans = Solution().sumOddLengthSubarrays(arr);
    cout << ans << endl;
    return 0;
}