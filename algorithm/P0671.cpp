/**
 * Author: Deean
 * Date: 2023-04-23 22:05
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    unordered_set<int> value;

    void dfs(TreeNode *root) {
        if (root == nullptr) return;
        dfs(root->left);
        value.emplace(root->val);
        dfs(root->right);
    }

    int findSecondMinimumValue(TreeNode *root) {
        dfs(root);
        vector<int> values;
        for (auto num: value) {
            values.push_back(num);
        }
        sort(values.begin(), values.end());
        return values.size() == 1 ? -1 : values[1];
    }
};

int main() {
    TreeNode *root = stringToTree("[2,2,5,null,null,5,7]");
    auto ans = Solution().findSecondMinimumValue(root);
    cout << toString(ans) << endl;
    return 0;
}
