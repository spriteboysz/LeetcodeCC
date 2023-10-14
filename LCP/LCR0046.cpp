/**
 * Author: Deean
 * Date: 2023-10-12 22:45
 * FileName: LCP
 * Description: LCR 046. 二叉树的右视图
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> rightSideView(TreeNode *root) {
        vector<int> right;
        if (!root) return right;
        queue < TreeNode * > queue;
        queue.push(root);
        while (!queue.empty()) {
            int last = 0;
            for (int i = 0, n = queue.size(); i < n; ++i) {
                auto node = queue.front();
                queue.pop();
                last = node->val;
                if (node->left) queue.push(node->left);
                if (node->right) queue.push(node->right);
            }
            right.push_back(last);
        }
        return right;
    }
};

int main() {
    TreeNode *root = stringToTree("[1,2,3,null,5,null,4]");
    auto ans = Solution().rightSideView(root);
    cout << toString(ans) << endl;
    return 0;
}