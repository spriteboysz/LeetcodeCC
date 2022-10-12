/**
 * Author: Deean
 * Date: 2022-10-12 22:10
 * FileName: offer/OII0045.cpp
 * Description: 
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int findBottomLeftValue(TreeNode *root) {
        int left = 0;
        queue<TreeNode *> queue;
        queue.push(root);
        while (!queue.empty()) {
            bool flag = true;
            int size = queue.size();
            for (int i = 0; i < size; ++i) {
                TreeNode *node = queue.front();
                queue.pop();
                if (flag) {
                    left = node->val;
                    flag = false;
                }
                if (node->left) {
                    queue.push(node->left);
                }
                if (node->right) {
                    queue.push(node->right);
                }
            }
        }
        return left;
    }
};

int main() {
    auto ans = Solution().findBottomLeftValue(stringToTree("[1,2,3,4,null,5,6,null,null,7]"));
    cout << toString(ans) << endl;
    return 0;
}