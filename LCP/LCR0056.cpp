/**
 * Author: Deean
 * Date: 2023-10-12 23:26
 * FileName: LCP
 * Description: LCR 056. 两数之和 IV - 输入二叉搜索树
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

    bool findTarget(TreeNode *root, int k) {
        if (!root) return false;
        dfs(root);
        int left = 0, right = values.size() - 1;
        while (left < right) {
            if (values[left] + values[right] < k) {
                left++;
            } else if (values[left] + values[right] > k) {
                right--;
            } else {
                return true;
            }
        }
        return false;
    }
};

int main() {
    TreeNode *root = stringToTree("[8,6,10,5,7,9,11]");
    auto ans = Solution().findTarget(root, 12);
    cout << toString(ans) << endl;
    return 0;
}