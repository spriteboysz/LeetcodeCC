/**
 * Author: Deean
 * Date: 2023-10-14 19:58
 * FileName: LCP
 * Description: LCR 193. 二叉搜索树的最近公共祖先
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
        TreeNode *common = root;
        while (1) {
            if (p->val < common->val && q->val < common->val) {
                common = common->left;
            } else if (p->val > common->val && q->val > common->val) {
                common = common->right;
            } else {
                break;
            }
        }
        return common;
    }
};

int main() {
    TreeNode *root = stringToTree("[6,2,8,0,4,7,9,null,null,3,5]");
    TreeNode *p = new TreeNode(2);
    TreeNode *q = new TreeNode(8);
    auto ans = Solution().lowestCommonAncestor(root, p, q);
    cout << toString(ans) << endl;
    return 0;
}