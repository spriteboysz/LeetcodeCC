/**
 * Author: Deean
 * Date: 2023-10-14 10:53
 * FileName: LCP
 * Description: LCR 144. 翻转二叉树
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    TreeNode *mirrorTree(TreeNode *root) {
        if (!root) return nullptr;
        auto temp = mirrorTree(root->left);
        root->left = mirrorTree(root->right);
        root->right = temp;
        return root;
    }
};

int main() {
    TreeNode *root = stringToTree("[5,7,9,8,3,2,4]");
    auto ans = Solution().mirrorTree(root);
    cout << toString(ans) << endl;
    return 0;
}