/**
 * Author: Deean
 * Date: 2023-07-19 22:42
 * FileName: algorithm
 * Description:1609. 奇偶树
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isEvenOddTree(TreeNode *root) {
        int level = 0;
        queue < TreeNode * > queue;
        queue.emplace(root);
        while (!queue.empty()) {
            int cur = level % 2 == 0 ? 0 : 1000001;
            for (int i = 0, size = queue.size(); i < size; ++i) {
                auto node = queue.front();
                queue.pop();
                if (level % 2 == node->val % 2 || (level % 2 == 0 && cur >= node->val) ||
                    (level % 2 != 0 && cur <= node->val)) {
                    return false;
                }
                cur = node->val;
                if (node->left) queue.emplace(node->left);
                if (node->right) queue.emplace(node->right);
            }
            level++;
        }
        return true;
    }
};

int main() {
    auto root = stringToTree("[1,10,4,3,null,7,9,12,8,6,null,null,2]");
    auto ans = Solution().isEvenOddTree(root);
    cout << toString(ans) << endl;
    return 0;
}
