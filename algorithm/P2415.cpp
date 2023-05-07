/**
 * Author: Deean
 * Date: 2023-05-07 22:28
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    TreeNode *reverseOddLevels(TreeNode *root) {
        if (root == nullptr) return root;
        queue < TreeNode * > queue;
        queue.emplace(root);
        int level = 0;
        vector<int> values;
        vector < TreeNode * > nodes;
        while (!queue.empty()) {
            values.clear();
            nodes.clear();
            for (int i = 0, n = queue.size(); i < n; ++i) {
                auto node = queue.front();
                queue.pop();
                if (level % 2 == 1) {
                    values.push_back(node->val);
                    nodes.push_back(node);
                }
                if (node->left) queue.emplace(node->left);
                if (node->right) queue.emplace(node->right);
            }
            if (level % 2 == 1) {
                reverse(values.begin(), values.end());
                for (int i = 0, m = nodes.size(); i < m; ++i) {
                    nodes[i]->val = values[i];
                }
            }
            level += 1;
        }
        return root;
    }
};

int main() {
    auto root = stringToTree("[2,3,5,8,13,21,34]");
    auto ans = Solution().reverseOddLevels(root);
    cout << toString(ans) << endl;
    return 0;
}
