/**
 * Author: Deean
 * Date: 2023-10-11 23:36
 * FileName: LCP
 * Description: LCR 044. 在每个树行中找最大值
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> largestValues(TreeNode *root) {
        vector<int> levels;
        if (!root) return levels;
        queue < TreeNode * > queue;
        queue.push(root);
        while (!queue.empty()) {
            int maximum = queue.front()->val;
            for (int i = 0, n = queue.size(); i < n; ++i) {
                auto node = queue.front();
                queue.pop();
                maximum = max(maximum, node->val);
                if (node->left) queue.push(node->left);
                if (node->right) queue.push(node->right);
            }
            levels.push_back(maximum);
        }
        return levels;
    }
};

int main() {
    TreeNode *root = stringToTree("[1,3,2,5,3,null,9]");
    auto ans = Solution().largestValues(root);
    cout << toString(ans) << endl;
    return 0;
}