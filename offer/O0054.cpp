/**
 * Author: Deean
 * Date: 2022-09-09 23:03
 * FileName: offer/O0054.cpp
 * Description: 剑指 Offer 54. 二叉搜索树的第k大节点
 */

#include <leetcode.h>

using namespace std;

class Solution {
private:
    vector<int> values;
public:
    void dfs(TreeNode *root) {
        if (root == nullptr) return;
        dfs(root->left);
        values.push_back(root->val);
        dfs(root->right);
    }

    int kthLargest(TreeNode *root, int k) {
        dfs(root);
        return values[values.size() - k];
    }
};

int main() {
    auto ans = Solution().kthLargest(stringToTree("[5,3,6,2,4,null,null,1]"), 3);
    cout << toString(ans) << endl;
    return 0;
}