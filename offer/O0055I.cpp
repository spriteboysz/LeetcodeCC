/**
 * Author: Deean
 * Date: 2022-09-04 14:37
 * FileName: offer/O0055I.cpp
 * Description: 剑指 Offer 55 - I. 二叉树的深度
 */

#include <leetcode.h>
#include <TreeNode.h>

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