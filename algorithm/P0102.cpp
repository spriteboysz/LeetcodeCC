/**
 * Author: Deean
 * Date: 2023-07-23 22:53
 * FileName: algorithm
 * Description:102. 二叉树的层序遍历
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<int>> levelOrder(TreeNode *root) {
        vector <vector<int>> levels;
        if (root == nullptr) return levels;
        vector<int> level;
        queue < TreeNode * > queue;
        queue.emplace(root);
        while (!queue.empty()) {
            level.clear();
            for (int i = 0, n = queue.size(); i < n; ++i) {
                auto node = queue.front();
                queue.pop();
                level.push_back(node->val);
                if (node->left) queue.emplace(node->left);
                if (node->right) queue.emplace(node->right);
            }
            levels.push_back(level);
        }
        return levels;
    }
};

int main() {
    auto root = stringToTree("[3,9,20,null,null,15,7]");
    auto ans = Solution().levelOrder(root);
    cout << toString(ans) << endl;
    return 0;
}
