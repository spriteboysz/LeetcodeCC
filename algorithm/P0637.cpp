/**
 * Author: Deean
 * Date: 2023-04-23 22:39
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<double> averageOfLevels(TreeNode *root) {
        vector<double> avg;
        queue < TreeNode * > queue;
        queue.push(root);
        while (!queue.empty()) {
            long level = 0;
            int n = queue.size();
            for (int i = 0; i < n; ++i) {
                TreeNode *node = queue.front();
                queue.pop();
                level += node->val;
                if (node->left) queue.push(node->left);
                if (node->right) queue.push(node->right);
            }
            avg.push_back(level * 1.0 / n);
        }
        return avg;
    }
};

int main() {
    TreeNode *root = stringToTree("[3,9,20,null,null,15,7]");
    auto ans = Solution().averageOfLevels(root);
    cout << toString(ans) << endl;
    return 0;
}
