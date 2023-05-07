/**
 * Author: Deean
 * Date: 2023-05-07 22:23
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;
typedef TreeNode Node;

class Solution {
public:
    vector<vector<int>> levelOrder(Node *root) {
        vector<vector<int>> levels;
        if (root == nullptr) return levels;
        queue<Node *> queue;
        queue.emplace(root);
        while (!queue.empty()) {
            vector<int> level;
            for (int i = 0, n = queue.size(); i < n; ++i) {
                Node *node = queue.front();
                queue.pop();
                level.push_back(node->val);
                for (auto child: node->children) {
                    queue.emplace(child);
                }
            }
            levels.push_back(level);
        }
        return levels;
    }
};

int main() {
    auto root = stringToTree("[1,null,3,2,4,null,5,6]");
    auto ans = Solution().levelOrder(root);
    cout << toString(ans) << endl;
    return 0;
}
