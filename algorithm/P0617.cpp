/**
 * Author: Deean
 * Date: 2022-09-08 23:15
 * FileName: algorithm/P0617.cpp
 * Description: 617. 合并二叉树
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    TreeNode *mergeTrees(TreeNode *root1, TreeNode *root2) {
        if (root1 == nullptr) return root2;
        if (root2 == nullptr) return root1;
        TreeNode *merge = new TreeNode(root1->val + root2->val);
        merge->left = mergeTrees(root1->left, root2->left);
        merge->right = mergeTrees(root1->right, root2->right);
        return merge;
    }
};

int main() {
    auto ans = Solution().mergeTrees(stringToTree("[1]"), stringToTree("[1,2]"));
    cout << toString(ans) << endl;
    return 0;
}