/**
 * Author: Deean
 * Date: 2022-09-07 22:35
 * FileName: offer/OII0069.cpp
 * Description: 剑指 Offer II 069. 山峰数组的顶部
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int> &arr) {
        int left = 1, right = arr.size() - 2, peak = 0;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] > arr[mid + 1]) {
                peak = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return peak;
    }
};

int main() {
    vector<int> arr = {24, 69, 100, 99, 79, 78, 67, 36, 26, 19};
    auto ans = Solution().peakIndexInMountainArray(arr);
    cout << toString(ans) << endl;
    return 0;
}