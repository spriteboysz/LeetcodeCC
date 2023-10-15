/**
 * Author: Deean
 * Date: 2023-10-14 17:14
 * FileName: LCP
 * Description: LCR 176. 判断是否为平衡二叉树
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int depth(TreeNode *root) {
        if (!root) return 0;
        return max(depth(root->left), depth(root->right)) + 1;
    }

    bool isBalanced(TreeNode *root) {
        if (!root) return true;
        return abs(depth(root->left) - depth(root->right)) <= 1 &&
               isBalanced(root->left) && isBalanced(root->right);
    }
};

int main() {
    TreeNode *root = stringToTree("[3,9,20,null,null,15,7]");
    auto ans = Solution().isBalanced(root);
    cout << toString(ans) << endl;
    return 0;
}