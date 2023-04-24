/**
 * Author: Deean
 * Date: 2023-04-24 23:01
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool dfs(TreeNode *root, TreeNode *subRoot) {
        if (root == nullptr && subRoot == nullptr) return true;
        if (root == nullptr || subRoot == nullptr || root->val != subRoot->val) {
            return false;
        }
        return dfs(root->left, subRoot->left) && dfs(root->right, subRoot->right);
    }

    bool isSubtree(TreeNode *root, TreeNode *subRoot) {
        if (root == nullptr || subRoot == nullptr) return false;
        return dfs(root, subRoot) || isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};

int main() {
    TreeNode *root = stringToTree("[3,4,5,1,2]");
    TreeNode *sub = stringToTree("[4,1,2]");
    auto ans = Solution().isSubtree(root, sub);
    cout << toString(ans) << endl;
    return 0;
}
