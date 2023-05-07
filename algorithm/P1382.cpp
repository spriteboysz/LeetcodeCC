/**
 * Author: Deean
 * Date: 2023-05-07 23:04
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> values;

    void dfs(TreeNode *root) {
        if (root == nullptr) return;
        dfs(root->left);
        values.push_back(root->val);
        dfs(root->right);
    }

    TreeNode *createTree(int left, int right) {
        if (left >= right) return nullptr;
        int mid = left + (right - left) / 2;
        auto root = new TreeNode(values[mid]);
        root->left = createTree(left, mid);
        root->right = createTree(mid + 1, right);
        return root;
    }

    TreeNode *balanceBST(TreeNode *root) {
        dfs(root);
        return createTree(0, values.size());
    }
};

int main() {
    auto root = stringToTree("[1,null,2,null,3,null,4,null,null]");
    auto ans = Solution().balanceBST(root);
    cout << toString(ans) << endl;
    return 0;
}
