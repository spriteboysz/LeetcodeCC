/**
 * Author: Deean
 * Date: 2023-07-15 22:26
 * FileName: offer
 * Description:剑指 Offer II 047. 二叉树剪枝
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    TreeNode *pruneTree(TreeNode *root) {
        if (root == nullptr) return nullptr;
        root->left = pruneTree(root->left);
        root->right = pruneTree(root->right);
        if (root->left == nullptr && root->right == nullptr && root->val == 0) {
            return nullptr;
        }
        return root;
    }
};

int main() {
    auto ans = Solution().pruneTree(stringToTree("[1,null,0,0,1]"));
    cout << toString(ans) << endl;
    return 0;
}
