/**
 * Author: Deean
 * Date: 2023-04-29 14:17
 * FileName: offer
 * Description: 
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

    bool isSymmetric(TreeNode *root) {
        if (root == nullptr) return true;
        return check(root->left, root->right);
    }
};

int main() {
    TreeNode *root = stringToTree("[1,2,2,3,4,4,3]");
    auto ans = Solution().isSymmetric(root);
    cout << toString(ans) << endl;
    return 0;
}
