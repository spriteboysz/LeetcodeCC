/**
 * Author: Deean
 * Date: 2022-09-07 22:17
 * FileName: algorithm/P1502.cpp
 * Description: 1502. 判断能否形成等差数列
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int> &arr) {
        if (arr.size() <= 2) return true;
        sort(arr.begin(), arr.end());
        int diff = arr[1] - arr[0];
        for (int i = 2; i < arr.size(); ++i) {
            if (arr[i] - arr[i - 1] != diff) return false;
        }
        return true;
    }
};

int main() {
    vector<int> arr = {3, 1, 5};
    auto ans = Solution().canMakeArithmeticProgression(arr);
    cout << toString(ans) << endl;
    return 0;
}