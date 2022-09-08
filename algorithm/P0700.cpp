/**
 * Author: Deean
 * Date: 2022-09-08 23:49
 * FileName: algorithm/P0700.cpp
 * Description: 700. 二叉搜索树中的搜索
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    TreeNode *searchBST(TreeNode *root, int val) {
        if (root == nullptr) return nullptr;
        if (root->val > val) {
            return searchBST(root->left, val);
        } else if (root->val < val) {
            return searchBST(root->right, val);
        } else {
            return root;
        }
    }
};

int main() {
    auto ans = Solution().searchBST(stringToTree("[4,2,7,1,3]"), 5);
    cout << toString(ans) << endl;
    ans = Solution().searchBST(stringToTree("[4,2,7,1,3]"), 2);
    cout << toString(ans) << endl;
    return 0;
}