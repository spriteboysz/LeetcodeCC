/**
 * Author: Deean
 * Date: 2023-10-14 17:12
 * FileName: LCP
 * Description: LCR 175. 计算二叉树的深度
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int calculateDepth(TreeNode *root) {
        if (!root) return 0;
        return max(calculateDepth(root->left), calculateDepth(root->right)) + 1;
    }
};

int main() {
    TreeNode *root = stringToTree("[1, 2, 2, 3, null, null, 5, 4, null, null, 4]");
    auto ans = Solution().calculateDepth(root);
    cout << toString(ans) << endl;
    return 0;
}