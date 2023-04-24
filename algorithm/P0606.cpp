/**
 * Author: Deean
 * Date: 2023-04-23 22:58
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string tree2str(TreeNode *root) {
        if (root == nullptr) return "";
        if (root->left == nullptr && root->right == nullptr) {
            return to_string(root->val);
        }
        if (root->right == nullptr) {
            return to_string(root->val) + "(" + tree2str(root->left) + ")";
        }
        return to_string(root->val) + "(" + tree2str(root->left) + ")(" + tree2str(root->right) + ")";
    }
};

int main() {
    TreeNode *root = stringToTree("[1,2,3,4]");
    auto ans = Solution().tree2str(root);
    cout << toString(ans) << endl;
    return 0;
}
