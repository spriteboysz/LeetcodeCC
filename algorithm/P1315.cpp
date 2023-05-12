/**
 * Author: Deean
 * Date: 2023-05-12 21:35
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int sum = 0;

    void dfs(TreeNode *grandparent, TreeNode *parent, TreeNode *node) {
        if (node == nullptr) return;
        if (grandparent->val % 2 == 0) {
            sum += node->val;
        }
        dfs(parent, node, node->left);
        dfs(parent, node, node->right);
    }

    int sumEvenGrandparent(TreeNode *root) {
        if (root->left) {
            dfs(root, root->left, root->left->left);
            dfs(root, root->left, root->left->right);
        }
        if (root->right) {
            dfs(root, root->right, root->right->left);
            dfs(root, root->right, root->right->right);
        }
        return sum;
    }
};

int main() {
    auto root = stringToTree("[6,7,8,2,7,1,3,9,null,1,4,null,null,null,5]");
    auto ans = Solution().sumEvenGrandparent(root);
    cout << toString(ans) << endl;
    return 0;
}
