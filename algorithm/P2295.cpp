/**
 * Author: Deean
 * Date: 2023-07-17 23:03
 * FileName: algorithm
 * Description:2295. 替换数组中的元素
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> arrayChange(vector<int> &nums, vector <vector<int>> &operations) {
        unordered_map<int, int> map;
        for (int i = 0, n = nums.size(); i < n; ++i) {
            map[nums[i]] = i;
        }
        for (auto operation: operations) {
            int index = map[operation[0]];
            nums[index] = operation[1];
            map.erase(operation[0]);
            map[operation[1]] = index;
        }
        return nums;
    }
};

int main() {
    vector<int> nums = {1, 2, 4, 6};
    auto operations = stringToVector2("[[1,3],[4,7],[6,1]]");
    auto ans = Solution().arrayChange(nums, operations);
    cout << toString(ans) << endl;
    return 0;
}
