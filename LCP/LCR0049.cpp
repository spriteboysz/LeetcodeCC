/**
 * Author: Deean
 * Date: 2023-10-12 22:54
 * FileName: LCP
 * Description: LCR 049. 求根节点到叶节点数字之和
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int dfs(TreeNode *root, int sum) {
        if (!root) return 0;
        sum = sum * 10 + root->val;
        if (!root->left && !root->right) {
            return sum;
        }
        return dfs(root->left, sum) + dfs(root->right, sum);
    }

    int sumNumbers(TreeNode *root) {
        return dfs(root, 0);
    }
};

int main() {
    TreeNode *root = stringToTree("[1,2,3,4]");
    auto ans = Solution().sumNumbers(root);
    cout << toString(ans) << endl;
    return 0;
}