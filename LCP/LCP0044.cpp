/**
 * Author: Deean
 * Date: 2022-09-03 21:45
 * FileName: LCP/LCP0044.cpp
 * Description: LCP 44. 开幕式焰火
 */

#include <iostream>
#include <unordered_set>
#include "..\common\TreeNode.h"

using namespace std;

class Solution {
private:
    unordered_set<int> color;
public:
    void dfs(TreeNode *root) {
        if (root == nullptr) return;
        color.emplace(root->val);
        dfs(root->left);
        dfs(root->right);
    }

    int numColor(TreeNode *root) {
        dfs(root);
        return color.size();
    }
};

int main() {
    TreeNode *root = stringToTree("[1,3,2,1,null,2]");
    cout << treeToString(root) << endl;
    auto ans = Solution().numColor(stringToTree("[1,3,2,1,null,2]"));
    cout << ans << endl;
    return 0;
}