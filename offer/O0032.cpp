/**
 * Author: Deean
 * Date: 2023-04-29 14:24
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<int>> levelOrder(TreeNode *root) {
        vector <vector<int>> levels;
        if (root == nullptr) return levels;
        queue < TreeNode * > queue;
        queue.push(root);
        while (queue.size() > 0) {
            vector<int> level;
            for (int i = 0, n = queue.size(); i < n; ++i) {
                TreeNode *node = queue.front();
                queue.pop();
                level.push_back(node->val);
                if (node->left) queue.push(node->left);
                if (node->right) queue.push(node->right);
            }
            levels.push_back(level);
        }
        return levels;
    }
};

int main() {
    TreeNode *root = stringToTree("[3,9,20,null,null,15,7]");
    auto ans = Solution().levelOrder(root);
    cout << toString(ans) << endl;
    return 0;
}
