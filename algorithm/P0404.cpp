/**
 * Author: Deean
 * Date: 2023-04-26 23:03
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int sumOfLeftLeaves(TreeNode *root) {
        if (root == nullptr) return 0;
        int sum = 0;
        if (root->left != NULL && root->left->left == NULL && root->left->right == NULL) {
            sum = root->left->val;
        }
        return sum + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
    }
};

int main() {
    TreeNode *root = stringToTree("[3,9,20,null,null,15,7] ");
    auto ans = Solution().sumOfLeftLeaves(root);
    cout << toString(ans) << endl;
    return 0;
}
