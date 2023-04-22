/**
 * Author: Deean
 * Date: 2023-04-22 16:18
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    void dfs(TreeNode *root, vector<int> &values) {
        if (root == nullptr) return;
        if (!root->left && !root->right) {
            values.push_back(root->val);
        } else {
            if (root->left) {
                dfs(root->left, values);
            }
            if (root->right) {
                dfs(root->right, values);
            }
        }
    }

    bool leafSimilar(TreeNode *root1, TreeNode *root2) {
        vector<int> values1, values2;
        dfs(root1, values1);
        dfs(root2, values2);
        if (values1.size() != values2.size()) return false;
        for (int i = 0; i < values1.size(); ++i) {
            if (values1[i] != values2[i]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    TreeNode *root1 = stringToTree("[3,5,1,6,2,9,8,null,null,7,4]");
    TreeNode *root2 = stringToTree("[3,5,1,6,7,4,2,null,null,null,null,null,null,9,8]");
    auto ans = Solution().leafSimilar(root1, root2);
    cout << toString(ans) << endl;
    return 0;
}
