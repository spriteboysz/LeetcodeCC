/**
 * Author: Deean
 * Date: 2022-09-04 14:41
 * FileName: algorithm/P0104.cpp
 * Description: 104. 二叉树的最大深度
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int maxDepth(TreeNode *root) {
        if (root == nullptr) return 0;
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};

int main() {
    auto ans = Solution().maxDepth(stringToTree("[3,9,20,null,null,15,7]"));
    cout << ans << endl;
    return 0;
}