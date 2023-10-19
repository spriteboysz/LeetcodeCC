/**
 * Author: Deean
 * Date: 2022-10-12 21:57
 * FileName: algorithm/P0654.cpp
 * Description: 
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    TreeNode *constructMaximumBinaryTree(vector<int> &nums) {
        TreeNode *node = new TreeNode(0);
        if (nums.size() == 1) {
            node->val = nums[0];
            return node;
        }
        // 找到数组中最大的值和对应的下表
        int maxValue = 0;
        int maxValueIndex = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxValue) {
                maxValue = nums[i];
                maxValueIndex = i;
            }
        }
        node->val = maxValue;
        // 最大值所在的下表左区间 构造左子树
        if (maxValueIndex > 0) {
            vector<int> newVec(nums.begin(), nums.begin() + maxValueIndex);
            node->left = constructMaximumBinaryTree(newVec);
        }
        // 最大值所在的下表右区间 构造右子树
        if (maxValueIndex < (nums.size() - 1)) {
            vector<int> newVec(nums.begin() + maxValueIndex + 1, nums.end());
            node->right = constructMaximumBinaryTree(newVec);
        }
        return node;
    }
};

int main() {
    vector<int> nums = stringToVector("[3,2,1]");
    auto ans = Solution().constructMaximumBinaryTree(nums);
    cout << toString(ans) << endl;
    return 0;
}