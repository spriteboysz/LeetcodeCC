/**
 * Author: Deean
 * Date: 2023-04-30 21:31
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int height(TreeNode *root) {
        if (root == nullptr) return 0;
        return max(height(root->left), height(root->right)) + 1;
    }

    bool isBalanced(TreeNode *root) {
        if (root == nullptr) return true;
        return abs(height(root->left) - height(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }
};

int main() {
    TreeNode *root = stringToTree("[3,9,20,null,null,15,7]");
    auto ans = Solution().isBalanced(root);
    cout << toString(ans) << endl;
    return 0;
}
