/**
 * Author: Deean
 * Date: 2023-04-21 22:52
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool canThreePartsEqualSum(vector<int> &arr) {
        int sum = 0;
        for (auto num: arr) {
            sum += num;
        }
        if (sum % 3 != 0) return false;
        int cnt = 0, acc = 0;
        for (int i = 0, n = arr.size(); i < n; ++i) {
            acc += arr[i];
            if (acc == sum / 3) {
                cnt++;
                acc = 0;
            }
            if (cnt == 3) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    vector<int> arr = {0, 2, 1, -6, 6, -7, 9, 1, 2, 0, 1};
    auto ans = Solution().canThreePartsEqualSum(arr);
    cout << toString(ans) << endl;
    return 0;
}
