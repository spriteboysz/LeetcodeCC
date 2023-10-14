/**
 * Author: Deean
 * Date: 2023-10-14 13:39
 * FileName: LCP
 * Description: LCR 151. 彩灯装饰记录 III
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<int>> decorateRecord(TreeNode *root) {
        vector <vector<int>> levels;
        if (!root) return levels;
        queue < TreeNode * > queue;
        vector<int> level;
        int depth = 0;
        queue.push(root);
        while (!queue.empty()) {
            level.clear();
            for (int i = 0, n = queue.size(); i < n; ++i) {
                auto node = queue.front();
                queue.pop();
                level.push_back(node->val);
                if (node->left) queue.push(node->left);
                if (node->right) queue.push(node->right);
            }
            if (depth % 2 == 1) {
                std::reverse(level.begin(), level.end());
            }
            depth++;
            levels.push_back(level);
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