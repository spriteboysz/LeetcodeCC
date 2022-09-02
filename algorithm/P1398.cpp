/**
 * Author: Deean
 * Date: 2022-09-02 23:06
 * FileName: algorithm/P1398.cpp
 * Description: 1389. 按既定顺序创建目标数组
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> createTargetArray(vector<int> &nums, vector<int> &index) {
        vector<int> target;
        for (int i = 0; i < nums.size(); ++i) {
            target.insert(target.begin() + index[i], nums[i]);
        }
        return target;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 0};
    vector<int> index = {0, 1, 2, 3, 0};
    auto ans = Solution().createTargetArray(nums, index);
    for (int num: ans)cout << num << " ";
    cout << endl;
    return 0;
}