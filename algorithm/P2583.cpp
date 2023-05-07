/**
 * Author: Deean
 * Date: 2023-05-07 23:14
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    long long kthLargestLevelSum(TreeNode *root, int k) {
        vector<long long> level;
        queue < TreeNode * > queue;
        queue.emplace(root);
        while (!queue.empty()) {
            long long sum = 0;
            for (int i = 0, n = queue.size(); i < n; ++i) {
                auto node = queue.front();
                queue.pop();
                sum += node->val;
                if (node->left) queue.emplace(node->left);
                if (node->right) queue.emplace(node->right);
            }
            level.push_back(sum);
        }
        if (level.size() < k) return -1;
        sort(level.rbegin(), level.rend());
        return level[k - 1];
    }
};

int main() {
    auto root = stringToTree("[5,8,9,2,1,3,7,4,6]");
    auto ans = Solution().kthLargestLevelSum(root, 2);
    cout << toString(ans) << endl;
    return 0;
}
