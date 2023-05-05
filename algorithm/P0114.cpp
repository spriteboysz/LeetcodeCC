/**
 * Author: Deean
 * Date: 2023-05-05 23:00
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<TreeNode *> nodes;

    void dfs(TreeNode *root) {
        if (root == nullptr) return;
        nodes.push_back(root);
        dfs(root->left);
        dfs(root->right);
    }

    void flatten(TreeNode *root) {
        if (root == nullptr) return;
        dfs(root);
        for (int i = 0, n = nodes.size(); i < n - 1; ++i) {
            nodes[i]->left = nullptr;
            nodes[i]->right = nodes[i + 1];
        }
        nodes[nodes.size() - 1]->left = nullptr;
        nodes[nodes.size() - 1]->right = nullptr;
        cout << toString(nodes[0]) << endl;
    }
};

int main() {
    TreeNode *root = stringToTree("[1,2,5,3,4,null,6]");
    Solution().flatten(root);
    return 0;
}
