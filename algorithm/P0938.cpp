/**
 * Author: Deean
 * Date: 2022-09-04 10:32
 * FileName: algorithm/P0938.cpp
 * Description: 938. 二叉搜索树的范围和
 */

#include <leetcode.h>
#include <TreeNode.h>

using namespace std;

class Solution {
public:
    int sum, l, h;

    int rangeSumBST(TreeNode *root, int low, int high) {
        sum = 0;
        l = low;
        h = high;
        dfs(root);
        return sum;
    }

    void dfs(TreeNode *node) {
        if (node == nullptr) return;
        dfs(node->left);
        if (node->val >= l && node->val <= h) {
            sum += node->val;
        } else if (node->val > h) {
            return;
        }
        dfs(node->right);
    }
};

int main() {
    auto ans = Solution().rangeSumBST(stringToTree("[10,5,15,3,7,13,18,1,null,6]"), 6, 10);
    cout << ans << endl;
    return 0;
}