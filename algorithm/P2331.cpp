/**
 * Author: Deean
 * Date: 2022-09-03 23:22
 * FileName: algorithm/P2331.cpp
 * Description: 2331. 计算布尔二叉树的值
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    bool evaluateTree(TreeNode *root) {
        if (root->val == 2) {
            return evaluateTree(root->left) || evaluateTree(root->right);
        } else if (root->val == 3) {
            return evaluateTree(root->left) && evaluateTree(root->right);
        } else {
            return root->val;
        }
    }
};

int main() {
    auto ans = Solution().evaluateTree(stringToTree("[2,1,3,null,null,0,1]"));
    cout << ans << endl;
    return 0;
}