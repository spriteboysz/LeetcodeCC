/**
 * Author: Deean
 * Date: 2023-10-12 23:05
 * FileName: LCP
 * Description: LCR 053. 二叉搜索树中的中序后继
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<TreeNode *> nodes;

    void dfs(TreeNode *root) {
        if (!root) return;
        dfs(root->left);
        nodes.push_back(root);
        dfs(root->right);
    }

    TreeNode *inorderSuccessor(TreeNode *root, TreeNode *p) {
        if (!root) return nullptr;
        dfs(root);
        for (int i = 0, n = nodes.size(); i < n - 1; ++i) {
            if (nodes[i]->val == p->val) {
                return nodes[i + 1];
            }
        }
        return nullptr;
    }
};

int main() {
    TreeNode *root = stringToTree("[5,3,6,2,4,null,null,1]");
    TreeNode *p = new TreeNode(2);
    auto ans = Solution().inorderSuccessor(root, p);
    cout << toString(ans) << endl;
    return 0;
}