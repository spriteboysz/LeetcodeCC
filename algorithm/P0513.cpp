/**
 * Author: Deean
 * Date: 2023-07-23 14:28
 * FileName: algorithm
 * Description:513. 找树左下角的值
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findBottomLeftValue(TreeNode *root) {
        int left = root->val;
        queue < TreeNode * > queue;
        queue.emplace(root);
        while (!queue.empty()) {
            for (int i = 0, n = queue.size(); i < n; ++i) {
                auto node = queue.front();
                queue.pop();
                if (i == 0) {
                    left = node->val;
                }
                if (node->left) queue.emplace(node->left);
                if (node->right) queue.emplace(node->right);
            }
        }
        return left;
    }
};

int main() {
    auto root = stringToTree("[1,2,3,4,null,5,6,null,null,7]");
    auto ans = Solution().findBottomLeftValue(root);
    cout << toString(ans) << endl;
    return 0;
}
