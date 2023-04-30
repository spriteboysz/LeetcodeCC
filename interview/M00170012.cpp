/**
 * Author: Deean
 * Date: 2023-04-29 22:18
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<TreeNode *> nodes;

    void dfs(TreeNode *root) {
        if (root == nullptr) return;
        dfs(root->left);
        nodes.push_back(root);
        dfs(root->right);
    }

    TreeNode *convertBiNode(TreeNode *root) {
        if (root == nullptr) return root;
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
    TreeNode *root = stringToTree("[4,2,5,1,3,null,6,0]");
    auto ans = Solution().convertBiNode(root);
    cout << toString(ans) << endl;
    return 0;
}
