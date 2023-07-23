/**
 * Author: Deean
 * Date: 2023-07-23 16:02
 * FileName: algorithm
 * Description:199. 二叉树的右视图
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> rightSideView(TreeNode *root) {
        vector<int> right;
        if (root == nullptr) return right;
        queue < TreeNode * > queue;
        queue.emplace(root);
        while (!queue.empty()) {
            int num;
            for (int i = 0, n = queue.size(); i < n; ++i) {
                auto node = queue.front();
                queue.pop();
                num = node->val;
                if (node->left) queue.emplace(node->left);
                if (node->right) queue.emplace(node->right);
            }
            right.push_back(num);
        }
        return right;
    }
};

int main() {
    auto root = stringToTree("[1,2,3,null,5,null,4]");
    auto ans = Solution().rightSideView(root);
    cout << toString(ans) << endl;
    return 0;
}
