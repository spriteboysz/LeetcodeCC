/**
 * Author: Deean
 * Date: 2022-09-06 23:16
 * FileName: algorithm/P0111.cpp
 * Description: 111. 二叉树的最小深度
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minDepth(TreeNode *root) {
        if (root == nullptr) return 0;
        if (root->left == nullptr && root->right == nullptr) return 1;
        int minimum = INT_MAX;
        if (root->left != nullptr) minimum = min(minDepth(root->left), minimum);
        if (root->right != nullptr) minimum = min(minDepth(root->right), minimum);
        return minimum + 1;
    }
};

int main() {
    auto ans = Solution().minDepth(stringToTree("[2,null,3,null,4,null,5,null,6]"));
    cout << toString(ans) << endl;
    return 0;
}