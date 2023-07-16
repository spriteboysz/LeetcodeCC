/**
 * Author: Deean
 * Date: 2023-07-15 22:34
 * FileName: algorithm
 * Description:235. 二叉搜索树的最近公共祖先
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
        if (root == p || root == q || root == nullptr) {
            return root;
        }
        if (root->val > p->val && root->val > q->val) {
            return lowestCommonAncestor(root->left, p, q);
        } else if (root->val < p->val && root->val < q->val) {
            return lowestCommonAncestor(root->right, p, q);
        }
        return root;
    }
};

int main() {
    auto p = stringToTree("[2]");
    auto q = stringToTree("[8]");
    auto ans = Solution().lowestCommonAncestor(stringToTree("[6,2,8,0,4,7,9,null,null,3,5]"), p, q);
    cout << toString(ans) << endl;
    return 0;
}
