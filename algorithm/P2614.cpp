/**
 * Author: Deean
 * Date: 2023-04-29 20:03
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool check(int num) {
        if (num == 1) return false;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

    int diagonalPrime(vector <vector<int>> &nums) {
        int maximum = 0;
        for (int i = 0, n = nums.size(), m = nums[0].size(); i < n; ++i) {
            if (check(nums[i][i])) {
                maximum = max(maximum, nums[i][i]);
            }
            if (check(nums[i][m - 1 - i])) {
                maximum = max(maximum, nums[i][m - 1 - i]);
            }
        }
        return maximum;
    }
};

int main() {
    auto nums = stringToVector2("[[1,2,3],[5,17,7],[9,11,10]]");
    auto ans = Solution().diagonalPrime(nums);
    cout << toString(ans) << endl;
    return 0;
}
