/**
 * Author: Deean
 * Date: 2023-07-23 15:44
 * FileName: algorithm
 * Description:230. 二叉搜索树中第K小的元素
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

public:
    int kthSmallest(TreeNode *root, int k) {
        dfs(root);
        return values[k - 1];
    }
};

int main() {
    auto root = stringToTree("[5,3,6,2,4,null,null,1]");
    auto ans = Solution().kthSmallest(root, 3);
    cout << toString(ans) << endl;
    return 0;
}
