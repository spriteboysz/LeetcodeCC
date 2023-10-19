/**
 * Author: Deean
 * Date: 2022-09-06 23:05
 * FileName: algorithm/P0110.cpp
 * Description: 110. 平衡二叉树
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int height(TreeNode *node) {
        if (node == nullptr) return 0;
        return max(height(node->left), height(node->right)) + 1;
    }

    bool isBalanced(TreeNode *root) {
        if (root == nullptr) {
            return true;
        } else {
            return abs(height(root->left) - height(root->right)) <= 1
                   && isBalanced(root->left)
                   && isBalanced(root->right);
        }
    }
};

int main() {
    auto ans = Solution().isBalanced(stringToTree("[3,9,20,null,null,15,7]"));
    cout << toString(ans) << endl;
    return 0;
}