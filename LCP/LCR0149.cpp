/**
 * Author: Deean
 * Date: 2023-10-14 13:31
 * FileName: LCP
 * Description: LCR 149. 彩灯装饰记录 I
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> decorateRecord(TreeNode *root) {
        vector<int> levels;
        if (!root) return levels;
        queue < TreeNode * > queue;
        queue.push(root);
        while (!queue.empty()) {
            for (int i = 0, n = queue.size(); i < n; ++i) {
                auto node = queue.front();
                queue.pop();
                levels.push_back(node->val);
                if (node->left) queue.push(node->left);
                if (node->right) queue.push(node->right);
            }
        }
        return levels;
    }
};

int main() {
    TreeNode *root = stringToTree("[8,17,21,18,null,null,6]");
    auto ans = Solution().decorateRecord(root);
    cout << toString(ans) << endl;
    return 0;
}