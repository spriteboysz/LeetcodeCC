/**
 * Author: Deean
 * Date: 2023-05-07 22:59
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> levelOrder(TreeNode *root) {
        vector<int> level;
        if (root == nullptr) return level;
        queue < TreeNode * > queue;
        queue.emplace(root);
        while (!queue.empty()) {
            for (int i = 0, n = queue.size(); i < n; ++i) {
                auto node = queue.front();
                queue.pop();
                level.push_back(node->val);
                if (node->left) queue.emplace(node->left);
                if (node->right) queue.emplace(node->right);
            }
        }
        return level;
    }
};

int main() {
    auto root = stringToTree("[3,9,20,null,null,15,7]");
    auto ans = Solution().levelOrder(root);
    cout << toString(ans) << endl;
    return 0;
}
