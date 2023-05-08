/**
 * Author: Deean
 * Date: 2023-05-07 22:42
 * FileName: interview
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

    bool isValidBST(TreeNode *root) {
        dfs(root);
        for (int i = 1, n = values.size(); i < n; ++i) {
            if (values[i] <= values[i - 1]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    auto root = stringToTree("[2,1,3]");
    auto ans = Solution().isValidBST(root);
    cout << toString(ans) << endl;
    return 0;
}
