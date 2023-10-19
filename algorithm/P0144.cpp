/**
 * Author: Deean
 * Date: 2022-09-04 23:09
 * FileName: algorithm/P0144.cpp
 * Description: 144. 二叉树的前序遍历
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
private:
    vector<int> values;
public:
    void dfs(TreeNode *node) {
        if (node == nullptr) return;
        values.push_back(node->val);
        dfs(node->left);
        dfs(node->right);
    }

    vector<int> preorderTraversal(TreeNode *root) {
        dfs(root);
        return values;
    }
};

int main() {
    auto ans = Solution().preorderTraversal(stringToTree("[1,null,2,3]"));
    cout << vectorToString(ans) << endl;
    return 0;
}