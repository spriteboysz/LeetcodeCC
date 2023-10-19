/**
 * Author: Deean
 * Date: 2022-09-06 22:55
 * FileName: algorithm/P0101.cpp
 * Description: 101. 对称二叉树
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    bool dfs(TreeNode *left, TreeNode *right) {
        if (left == nullptr && right == nullptr) {
            return true;
        } else if (left == nullptr || right == nullptr) {
            return false;
        } else if (left->val != right->val) {
            return false;
        } else {
            return dfs(left->left, right->right) && dfs(left->right, right->left);
        }
    }

    bool isSymmetric(TreeNode *root) {
        if (root == nullptr) return true;
        return dfs(root->left, root->right);
    }
};

int main() {
    auto ans = Solution().isSymmetric(stringToTree("[1,2,2,3,4,4,3]"));
    cout << toString(ans) << endl;
    return 0;
}