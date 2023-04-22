/**
 * Author: Deean
 * Date: 2023-04-22 19:48
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> value;

    void dfs(TreeNode *root) {
        if (root == nullptr) return;
        dfs(root->left);
        value.push_back(root->val);
        dfs(root->right);
    }

    int getMinimumDifference(TreeNode *root) {
        dfs(root);
        int minimum = value[1] - value[0];
        for (int i = 1, n = value.size(); i < n; ++i) {
            minimum = min(minimum, value[i] - value[i - 1]);
        }
        return minimum;
    }
};

int main() {
    TreeNode *root = stringToTree("[4,2,6,1,3]");
    auto ans = Solution().getMinimumDifference(root);
    cout << toString(ans) << endl;
    return 0;
}
