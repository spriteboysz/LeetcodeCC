/**
 * Author: Deean
 * Date: 2022-09-04 21:21
 * FileName: algorithm/P0145.cpp
 * Description: 145. 二叉树的后序遍历
 */

#include <leetcode.h>
#include <TreeNode.h>

using namespace std;

class Solution {
private:
    vector<int> values;
public:
    void dfs(TreeNode *node) {
        if (node == nullptr) return;
        dfs(node->left);
        dfs(node->right);
        values.push_back(node->val);
    }

    vector<int> postorderTraversal(TreeNode *root) {
        dfs(root);
        return values;
    }
};

int main() {
    auto ans = Solution().postorderTraversal(stringToTree("[1,null,2,3]"));
    cout << vectorToString(ans) << endl;
    return 0;
}