/**
 * Author: Deean
 * Date: 2022-09-04 14:26
 * FileName: offer/O0027.cpp
 * Description: 剑指 Offer 27. 二叉树的镜像
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    TreeNode *mirrorTree(TreeNode *root) {
        if (root == nullptr) return nullptr;
        TreeNode *left = mirrorTree(root->left);
        TreeNode *right = mirrorTree(root->right);
        root->left = right;
        root->right = left;
        return root;
    }
};

int main() {
    auto ans = Solution().mirrorTree(stringToTree("[4,2,7,1,3,6,9]"));
    cout << treeToString(ans) << endl;
    return 0;
}