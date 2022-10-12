/**
 * Author: Deean
 * Date: 2022-10-12 21:16
 * FileName: offer/OII0054.cpp
 * Description: 剑指 Offer II 054. 所有大于等于节点的值之和
 */

#include <leetcode.h>

using namespace std;

class Solution {
private:
    int sum = 0;
public:
    TreeNode *convertBST(TreeNode *root) {
        if (root == nullptr) return root;
        convertBST(root->right);
        sum += root->val;
        root->val = sum;
        convertBST(root->left);
        return root;
    }
};

int main() {
    TreeNode *root = stringToTree("[3,2,4,1]");
    auto ans = Solution().convertBST(root);
    cout << toString(ans) << endl;
    return 0;
}