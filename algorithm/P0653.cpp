/**
 * Author: Deean
 * Date: 2023-04-23 22:20
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> values;

    void dfs(TreeNode *root) {
        if (root == nullptr) return;
        dfs(root->left);
        values.push_back(root->val);
        dfs(root->right);
    }

    bool findTarget(TreeNode *root, int k) {
        dfs(root);
        for (int left = 0, right = values.size() - 1; left < right;) {
            if (values[left] + values[right] > k) {
                right--;
            } else if (values[left] + values[right] < k) {
                left++;
            } else {
                return true;
            }
        }
        return false;
    }
};

int main() {
    TreeNode *root = stringToTree("[5,3,6,2,4,null,7]");
    auto ans = Solution().findTarget(root, 9);
    cout << toString(ans) << endl;
    return 0;
}
