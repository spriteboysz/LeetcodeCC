/**
 * Author: Deean
 * Date: 2022-09-09 22:27
 * FileName: algorithm/P0108.cpp
 * Description: 108. 将有序数组转换为二叉搜索树
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    TreeNode *createTree(vector<int> &nums, int left, int right) {
        if (left > right) return nullptr;
        int mid = left + (right - left) / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = createTree(nums, left, mid - 1);
        root->right = createTree(nums, mid + 1, right);
        return root;
    }

    TreeNode *sortedArrayToBST(vector<int> &nums) {
        return createTree(nums, 0, nums.size() - 1);
    }
};

int main() {
    vector<int> nums = {-10, -3, 0, 5, 9};
    auto ans = Solution().sortedArrayToBST(nums);
    cout << toString(ans) << endl;
    return 0;
}