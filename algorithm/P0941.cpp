/**
 * Author: Deean
 * Date: 2023-07-22 22:59
 * FileName: algorithm
 * Description:941. 有效的山脉数组
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int> &arr) {
        int i = 0, n = arr.size();
        while (i + 1 < n && arr[i] < arr[i + 1]) {
            i++;
        }
        if (i == 0 || i == n - 1) {
            return false;
        }
        while (i + 1 < n && arr[i] > arr[i + 1]) {
            i++;
        }
        return i == n - 1;
    }
};

int main() {
    vector<int> arr = {0, 3, 2, 1};
    auto ans = Solution().validMountainArray(arr);
    cout << toString(ans) << endl;
    return 0;
}
