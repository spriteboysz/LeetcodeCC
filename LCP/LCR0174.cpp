/**
 * Author: Deean
 * Date: 2023-10-14 17:08
 * FileName: LCP
 * Description: LCR 174. 寻找二叉搜索树中的目标节点
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> values;

    void dfs(TreeNode *root) {
        if (!root) return;
        dfs(root->left);
        values.push_back(root->val);
        dfs(root->right);
    }

    int findTargetNode(TreeNode *root, int cnt) {
        dfs(root);
        return values[values.size() - cnt];
    }
};

int main() {
    TreeNode *root = stringToTree("[7, 3, 9, 1, 5]");
    auto ans = Solution().findTargetNode(root, 2);
    cout << toString(ans) << endl;
    return 0;
}