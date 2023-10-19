/**
 * Author: Deean
 * Date: 2022-10-12 21:32
 * FileName: algorithm/P0538. 把二叉搜索树转换为累加树.cpp
 * Description: 
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
private:
    int sum = 0;
public:
    TreeNode *convertBST(TreeNode *root) {
        if (root == nullptr) return nullptr;
        convertBST(root->right);
        sum += root->val;
        root->val = sum;
        convertBST(root->left);
        return root;
    }
};

int main() {
    auto ans = Solution().convertBST(stringToTree("[4,1,6,0,2,5,7,null,null,null,3,null,null,null,8]"));
    cout << toString(ans) << endl;
    return 0;
}