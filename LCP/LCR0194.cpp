/**
 * Author: Deean
 * Date: 2023-10-14 20:00
 * FileName: LCP
 * Description: LCR 194. 二叉树的最近公共祖先
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    TreeNode *common;

    bool dfs(TreeNode *root, TreeNode *p, TreeNode *q) {
        if (root == nullptr) return false;
        bool left = dfs(root->left, p, q);
        bool right = dfs(root->right, p, q);
        if ((left && right) || ((root->val == p->val || root->val == q->val) && (left || right))) {
            common = root;
        }
        return left || right || (root->val == p->val || root->val == q->val);
    }

    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
        dfs(root, p, q);
        return common;
    }
};

int main() {
    TreeNode *root = stringToTree("[3,5,1,6,2,0,8,null,null,7,4]");
    TreeNode *p = new TreeNode(5);
    TreeNode *q = new TreeNode(1);
    auto ans = Solution().lowestCommonAncestor(root, p, q);
    cout << toString(ans) << endl;
    return 0;
}