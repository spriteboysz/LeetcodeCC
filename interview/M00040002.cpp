/**
 * Author: Deean
 * Date: 2022-10-12 22:20
 * FileName: interview/M00040002.cpp
 * Description: 面试题 04.02. 最小高度树
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    TreeNode *sortedArrayToBST(vector<int> &nums) {
        if (nums.size() == 0) return nullptr;
        int mid = nums.size() >> 1;
        TreeNode *root = new TreeNode(nums[mid]);
        vector<int> left(nums.begin(), nums.begin() + mid);
        vector<int> right(nums.begin() + mid + 1, nums.end());
        root->left = sortedArrayToBST(left);
        root->right = sortedArrayToBST(right);
        return root;
    }
};

int main() {
    vector<int> nums = stringToVector("[-10,-3,0,5,9]");
    auto ans = Solution().sortedArrayToBST(nums);
    cout << toString(ans) << endl;
    return 0;
}