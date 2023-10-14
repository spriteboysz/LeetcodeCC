/**
 * Author: Deean
 * Date: 2023-10-12 22:51
 * FileName: LCP
 * Description: LCR 047. 二叉树剪枝
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    TreeNode *pruneTree(TreeNode *root) {
        if (!root) return root;
        root->left = pruneTree(root->left);
        root->right = pruneTree(root->right);
        if (!root->left && !root->right && root->val == 0) {
            return nullptr;
        }
        return root;
    }
};

int main() {
    TreeNode *root = stringToTree("[1,null,0,0,1]");
    auto ans = Solution().pruneTree(root);
    cout << toString(ans) << endl;
    return 0;
}