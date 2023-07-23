/**
 * Author: Deean
 * Date: 2023-07-23 22:47
 * FileName: algorithm
 * Description:103. 二叉树的锯齿形层序遍历
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<int>> zigzagLevelOrder(TreeNode *root) {
        vector <vector<int>> levels;
        if (root == nullptr) return levels;
        vector<int> level;
        queue < TreeNode * > queue;
        queue.emplace(root);
        int depth = 1;
        while (!queue.empty()) {
            level.clear();
            for (int i = 0, n = queue.size(); i < n; ++i) {
                auto node = queue.front();
                queue.pop();
                level.push_back(node->val);
                if (node->left) queue.emplace(node->left);
                if (node->right) queue.emplace(node->right);
            }
            if (depth % 2 == 0) {
                std::reverse(level.begin(), level.end());
            }
            levels.push_back(level);
            depth++;
        }
        return levels;
    }
};

int main() {
    auto root = stringToTree("[3,9,20,null,null,15,7]");
    auto ans = Solution().zigzagLevelOrder(root);
    cout << toString(ans) << endl;
    return 0;
}
