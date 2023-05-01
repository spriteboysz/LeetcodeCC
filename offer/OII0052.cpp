/**
 * Author: Deean
 * Date: 2023-04-30 21:50
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

    TreeNode *increasingBST(TreeNode *root) {
        dfs(root);
        int n = nodes.size();
        for (int i = 0; i < n - 1; ++i) {
            nodes[i]->left = nullptr;
            nodes[i]->right = nodes[i + 1];
        }
        nodes[n - 1]->left = nullptr;
        nodes[n - 1]->right = nullptr;
        return nodes[0];
    }
};

int main() {
    TreeNode *root = stringToTree("[5,3,6,2,4,null,8,1,null,null,null,7,9]");
    auto ans = Solution().increasingBST(root);
    cout << toString(ans) << endl;
    return 0;
}
