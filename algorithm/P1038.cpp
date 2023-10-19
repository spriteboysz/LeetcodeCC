/**
 * Author: Deean
 * Date: 2022-10-12 21:39
 * FileName: algorithm/P1038.cpp
 * Description: 
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
private:
    int sum = 0;
public:
    TreeNode *bstToGst(TreeNode *root) {
        if (root == nullptr) return root;
        bstToGst(root->right);
        sum += root->val;
        root->val = sum;
        bstToGst(root->left);
        return root;
    }
};

int main() {
    auto ans = Solution().bstToGst(stringToTree("[0,null,1]"));
    cout << toString(ans) << endl;
    return 0;
}