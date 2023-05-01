/**
 * Author: Deean
 * Date: 2023-05-01 17:01
 * FileName: offer
 * Description: 
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
    TreeNode *p = stringToTree("[5]");
    TreeNode *q = stringToTree("[1]");
    auto ans = Solution().lowestCommonAncestor(root, p, q);
    cout << toString(ans) << endl;
    return 0;
}
