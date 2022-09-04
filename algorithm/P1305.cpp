/**
 * Author: Deean
 * Date: 2022-09-04 16:57
 * FileName: algorithm/P1305.cpp
 * Description: 1305. 两棵二叉搜索树中的所有元素
 */

#include <leetcode.h>
#include <TreeNode.h>

using namespace std;

class Solution {
private:
    vector<int> values;
public:
    vector<int> getAllElements(TreeNode *root1, TreeNode *root2) {
        dfs(root1);
        dfs(root2);
        sort(values.begin(), values.end());
        return values;
    }

    void dfs(TreeNode *node) {
        if (node == nullptr) return;
        values.push_back(node->val);
        dfs(node->left);
        dfs(node->right);
    }
};

int main() {
    auto ans = Solution().getAllElements(stringToTree("[1,null,8]"), stringToTree("[8,1]"));
    cout << vectorToString(ans) << endl;
    return 0;
}