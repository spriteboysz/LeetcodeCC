/**
 * Author: Deean
 * Date: 2023-10-12 23:00
 * FileName: LCP
 * Description: LCR 052. 递增顺序搜索树
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

    TreeNode *increasingBST(TreeNode *root) {
        if (!root) return nullptr;
        dfs(root);
        for (int i = 0, n = nodes.size(); i < n - 1; ++i) {
            nodes[i]->left = nullptr;
            nodes[i]->right = nodes[i + 1];
        }
        nodes[nodes.size() - 1]->left = nullptr;
        nodes[nodes.size() - 1]->right = nullptr;
        return nodes[0];
    }
};

int main() {
    TreeNode *root = stringToTree("[5,3,6,2,4,null,8,1,null,null,null,7,9]");
    auto ans = Solution().increasingBST(root);
    cout << toString(ans) << endl;
    return 0;
}