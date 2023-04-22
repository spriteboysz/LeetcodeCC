/**
 * Author: Deean
 * Date: 2023-04-21 22:30
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int dfs(TreeNode *root, int val) {
        if (root == nullptr) return 0;
        val = val * 2 + root->val;
        if (root->left == nullptr && root->right == nullptr) {
            return val;
        }
        return dfs(root->left, val) + dfs(root->right, val);
    }

    int sumRootToLeaf(TreeNode *root) {
        return dfs(root, 0);
    }
};

int main() {
    TreeNode *root = stringToTree("[1,0,1,0,1,0,1]");
    auto ans = Solution().sumRootToLeaf(root);
    cout << toString(ans) << endl;
    return 0;
}
