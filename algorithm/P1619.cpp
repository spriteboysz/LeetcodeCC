/**
 * Author: Deean
 * Date: 2022-09-07 23:31
 * FileName: algorithm/P1619.cpp
 * Description: 1619. 删除某些元素后的数组均值
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    double trimMean(vector<int> &arr) {
        sort(arr.begin(), arr.end());
        int sum = 0, n = arr.size() / 20;
        for (int i = n; i < arr.size() - n; ++i) {
            sum += arr[i];
        }
        return double(sum * 1.0 / (arr.size() - 2 * n));
    }
};

int main() {
    vector<int> arr = {4, 8, 4, 10, 0, 7, 1, 3, 7, 8, 8, 3, 4, 1, 6, 2, 1, 1, 8, 0, 9, 8, 0, 3, 9, 10, 3, 10, 1, 10, 7,
                       3, 2, 1, 4, 9, 10, 7, 6, 4, 0, 8, 5, 1, 2, 1, 6, 2, 5, 0, 7, 10, 9, 10, 3, 7, 10, 5, 8, 5, 7, 6,
                       7, 6, 10, 9, 5, 10, 5, 5, 7, 2, 10, 7, 7, 8, 2, 0, 1, 1};
    auto ans = Solution().trimMean(arr);
    cout << ans << endl;
    return 0;
}