/**
 * Author: Deean
 * Date: 2023-05-07 22:50
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> largestValues(TreeNode *root) {
        vector<int> levels;
        if (root == nullptr) return levels;
        queue < TreeNode * > queue;
        queue.emplace(root);
        while (!queue.empty()) {
            int maximum = INT_MIN;
            for (int i = 0, n = queue.size(); i < n; ++i) {
                auto node = queue.front();
                queue.pop();
                maximum = max(maximum, node->val);
                if (node->left) queue.emplace(node->left);
                if (node->right) queue.emplace(node->right);
            }
            levels.push_back(maximum);
        }
        return levels;
    }
};

int main() {
    auto root = stringToTree("[1,3,2,5,3,null,9]");
    auto ans = Solution().largestValues(root);
    cout << toString(ans) << endl;
    return 0;
}
