/**
 * Author: Deean
 * Date: 2022-09-04 23:01
 * FileName: algorithm/P0965.cpp
 * Description: 965. 单值二叉树
 */

#include <leetcode.h>
#include <TreeNode.h>

using namespace std;

class Solution {
private:
    unordered_set<int> values;
public:
    void dfs(TreeNode *node) {
        if (node == nullptr) return;
        values.emplace(node->val);
        dfs(node->left);
        dfs(node->right);
    }

    bool isUnivalTree(TreeNode *root) {
        dfs(root);
        return values.size() == 1;
    }
};

int main() {
    auto ans = Solution().isUnivalTree(stringToTree("[2,2,2,5,2]"));
    cout << ans << endl;
    return 0;
}