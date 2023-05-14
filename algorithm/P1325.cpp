/**
 * Author: Deean
 * Date: 2023-05-13 23:10
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    TreeNode *removeLeafNodes(TreeNode *root, int target) {
        if (root == nullptr) return root;
        root->left = removeLeafNodes(root->left, target);
        root->right = removeLeafNodes(root->right, target);
        if (root->left == nullptr && root->right == nullptr && root->val == target) {
            root = nullptr;
        }
        return root;
    }
};

int main() {
    auto root = stringToTree("[1,2,3,2,null,2,4]");
    auto ans = Solution().removeLeafNodes(root, 2);
    cout << toString(ans) << endl;
    return 0;
}
