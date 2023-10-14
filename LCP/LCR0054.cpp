/**
 * Author: Deean
 * Date: 2023-10-12 23:13
 * FileName: LCP
 * Description: LCR 054. 把二叉搜索树转换为累加树
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int acc = 0;

    void dfs(TreeNode *root) {
        if (!root) return;
        dfs(root->right);
        acc += root->val;
        root->val = acc;
        dfs(root->left);
    }

    TreeNode *convertBST(TreeNode *root) {
        if (!root) return nullptr;
        dfs(root);
        return root;
    }
};

int main() {
    TreeNode *root = stringToTree("[4,1,6,0,2,5,7,null,null,null,3,null,null,null,8]");
    auto ans = Solution().convertBST(root);
    cout << toString(ans) << endl;
    return 0;
}