/**
 * Author: Deean
 * Date: 2023-04-29 14:53
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
        dfs(root->right);
        values.push_back(root->val);
        dfs(root->left);
    }

    int kthLargest(TreeNode *root, int k) {
        dfs(root);
        return values[k - 1];
    }
};

int main() {
    TreeNode *root = stringToTree("[5,3,6,2,4,null,null,1]");
    auto ans = Solution().kthLargest(root, 3);
    cout << toString(ans) << endl;
    return 0;
}
