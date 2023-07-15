/**
 * Author: Deean
 * Date: 2023-07-14 22:51
 * FileName: algorithm
 * Description:701. 二叉搜索树中的插入操作
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
private:
    vector<int> values;

    void dfs(TreeNode *root) {
        if (!root) return;
        dfs(root->left);
        values.push_back(root->val);
        dfs(root->right);
    }

    TreeNode *create(int left, int right) {
        if (left >= right) return nullptr;
        int mid = left + ((right - left) >> 1);
        TreeNode *root = new TreeNode(values[mid]);
        root->left = create(left, mid);
        root->right = create(mid + 1, right);
        return root;
    }

public:
    TreeNode *insertIntoBST(TreeNode *root, int val) {
        dfs(root);
        values.push_back(val);
        sort(values.begin(), values.end());
        return create(0, values.size());
    }
};

int main() {
    auto ans = Solution().insertIntoBST(stringToTree("[4,2,7,1,3]"), 5);
    cout << toString(ans) << endl;
    return 0;
}
