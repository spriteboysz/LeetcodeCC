/**
 * Author: Deean
 * Date: 2023-05-13 22:05
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int dfs(TreeNode *root, int sum) {
        if (root == nullptr) return 0;
        sum = sum * 10 + root->val;
        if (root->left == nullptr && root->right == nullptr) {
            return sum;
        }
        return dfs(root->left, sum) + dfs(root->right, sum);
    }

    int sumNumbers(TreeNode *root) {
        return dfs(root, 0);
    }
};

int main() {
    auto root = stringToTree("[1,2,3]");
    auto ans = Solution().sumNumbers(root);
    cout << toString(ans) << endl;
    return 0;
}
