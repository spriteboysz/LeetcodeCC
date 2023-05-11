/**
 * Author: Deean
 * Date: 2023-05-10 22:46
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int kthSmallest(vector <vector<int>> &matrix, int k) {
        vector<int> nums;
        for (auto row: matrix) {
            for (auto num: row) {
                nums.push_back(num);
            }
        }
        sort(nums.begin(), nums.end());
        return nums[k - 1];
    }
};

int main() {
    auto matrix = stringToVector2("[[1,5,9],[10,11,13],[12,13,15]]");
    auto ans = Solution().kthSmallest(matrix, 8);
    cout << toString(ans) << endl;
    return 0;
}
