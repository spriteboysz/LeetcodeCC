/**
 * Author: Deean
 * Date: 2023-07-23 15:18
 * FileName: algorithm
 * Description:287. 寻找重复数
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int> &nums) {
        unordered_set<int> visited;
        for (auto num: nums) {
            if (visited.count(num) > 0) {
                return num;
            }
            visited.insert(num);
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {1, 3, 4, 2, 2};
    auto ans = Solution().findDuplicate(nums);
    cout << toString(ans) << endl;
    return 0;
}
