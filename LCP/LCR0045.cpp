/**
 * Author: Deean
 * Date: 2023-10-11 23:55
 * FileName: LCP
 * Description: LCR 045. 找树左下角的值
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findBottomLeftValue(TreeNode *root) {
        int target = root->val;
        queue < TreeNode * > queue;
        queue.push(root);
        while (!queue.empty()) {
            for (int i = 0, n = queue.size(); i < n; ++i) {
                auto node = queue.front();
                queue.pop();
                if (i == 0) target = node->val;
                if (node->left) queue.push(node->left);
                if (node->right) queue.push(node->right);
            }
        }
        return target;
    }
};

int main() {
    TreeNode *root = stringToTree("[1,2,3,4,null,5,6,null,null,7]");
    auto ans = Solution().findBottomLeftValue(root);
    cout << toString(ans) << endl;
    return 0;
}