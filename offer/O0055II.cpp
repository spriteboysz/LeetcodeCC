/**
 * Author: Deean
 * Date: 2023-04-29 15:00
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int depth(TreeNode *root) {
        if (root == nullptr) return 0;
        return max(depth(root->left), depth(root->right)) + 1;
    }

    bool isBalanced(TreeNode *root) {
        if (root == nullptr) return true;
        return abs(depth(root->left) - depth(root->right)) <= 1 &&
               isBalanced(root->right) && isBalanced(root->left);
    }
};

int main() {
    TreeNode *root = stringToTree("[3,9,20,null,null,15,7]");
    auto ans = Solution().isBalanced(root);
    cout << toString(ans) << endl;
    return 0;
}
