/**
 * Author: Deean
 * Date: 2022-09-04 21:17
 * FileName: algorithm/P0094.cpp
 * Description: 94. 二叉树的中序遍历
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
private:
    vector<int> values;
public:
    void dfs(TreeNode *node) {
        if (node == nullptr) return;
        dfs(node->left);
        values.push_back(node->val);
        dfs(node->right);
    }

    vector<int> inorderTraversal(TreeNode *root) {
        dfs(root);
        return values;
    }
};

int main() {
    auto ans = Solution().inorderTraversal(stringToTree("[1,null,2,3]"));
    cout << vectorToString(ans) << endl;
    return 0;
}