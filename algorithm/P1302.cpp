/**
 * Author: Deean
 * Date: 2022-10-11 23:44
 * FileName: algorithm/P1302.cpp
 * Description: 1302. 层数最深叶子节点的和
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int deepestLeavesSum(TreeNode *root) {
        int leaves = 0;
        queue<TreeNode *> queue;
        queue.emplace(root);
        while (!queue.empty()) {
            leaves = 0;
            int size = queue.size();
            for (int i = 0; i < size; ++i) {
                TreeNode *node = queue.front();
                queue.pop();
                leaves += node->val;
                if (node->left != nullptr) {
                    queue.emplace(node->left);
                }
                if (node->right != nullptr) {
                    queue.emplace(node->right);
                }
            }
        }
        return leaves;
    }
};

int main() {
    TreeNode *root = stringToTree("[6,7,8,2,7,1,3,9,null,1,4,null,null,null,5]");
    auto ans = Solution().deepestLeavesSum(root);
    cout << toString(ans) << endl;
    return 0;
}