/**
 * Author: Deean
 * Date: 2023-07-22 22:06
 * FileName: algorithm
 * Description:1161. 最大层内元素和
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maxLevelSum(TreeNode *root) {
        int level = 1, maxLevel = 1, maximum = root->val;
        queue < TreeNode * > queue;
        queue.emplace(root);
        while (!queue.empty()) {
            int sum = 0;
            for (int i = 0, size = queue.size(); i < size; ++i) {
                auto node = queue.front();
                queue.pop();
                sum += node->val;
                if (node->left) queue.emplace(node->left);
                if (node->right) queue.emplace(node->right);
            }
            if (sum > maximum) {
                maximum = sum;
                maxLevel = level;
            }
            level++;
        }
        return maxLevel;
    }
};

int main() {
    auto root = stringToTree("[989,null,10250,98693,-89388,null,null,null,-32127]");
    auto ans = Solution().maxLevelSum(root);
    cout << toString(ans) << endl;
    return 0;
}
