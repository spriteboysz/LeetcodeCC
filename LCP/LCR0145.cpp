/**
 * Author: Deean
 * Date: 2023-10-14 10:55
 * FileName: LCP
 * Description: LCR 145. 判断对称二叉树
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool check(TreeNode *root1, TreeNode *root2) {
        if (root1 == nullptr && root2 == nullptr) return true;
        if (root1 == nullptr || root2 == nullptr) return false;
        if (root1->val != root2->val) return false;
        return check(root1->left, root2->right) && check(root1->right, root2->left);
    }

    bool checkSymmetricTree(TreeNode *root) {
        if (root == nullptr) return true;
        return check(root->left, root->right);
    }
};

int main() {
    TreeNode *root = stringToTree("[6,7,7,8,9,9,8]");
    auto ans = Solution().checkSymmetricTree(root);
    cout << toString(ans) << endl;
    return 0;
}