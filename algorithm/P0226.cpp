/**
 * Author: Deean
 * Date: 2022-09-04 14:30
 * FileName: algorithm/P0226.cpp
 * Description: 226. 翻转二叉树
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    TreeNode *invertTree(TreeNode *root) {
        if (root == nullptr) return root;
        TreeNode *left = invertTree(root->left);
        TreeNode *right = invertTree(root->right);
        root->left = right;
        root->right = left;
        return root;
    }
};

int main() {
    auto ans = Solution().invertTree(stringToTree("[4,2,7,1,3,6,9]"));
    cout << treeToString(ans) << endl;
    cout << toString(ans) << endl;
    return 0;
}