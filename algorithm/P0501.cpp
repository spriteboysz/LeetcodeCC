/**
 * Author: Deean
 * Date: 2023-04-25 23:05
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    unordered_map<int, int> hash;

    void dfs(TreeNode *root) {
        if (root == nullptr) return;
        dfs(root->left);
        hash[root->val]++;
        dfs(root->right);
    }

    vector<int> findMode(TreeNode *root) {
        dfs(root);
        int maximum = 0;
        for (auto [k, v]: hash) {
            maximum = max(maximum, v);
        }
        vector<int> mode;
        for (auto [k, v]: hash) {
            if (v == maximum) {
                mode.push_back(k);
            }
        }
        return mode;
    }
};

int main() {
    TreeNode *root = stringToTree("[1,null,2,2]");
    auto ans = Solution().findMode(root);
    cout << toString(ans) << endl;
    return 0;
}
