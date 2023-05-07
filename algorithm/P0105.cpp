/**
 * Author: Deean
 * Date: 2023-05-07 11:51
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        if (preorder.empty()) return nullptr;
        auto root = new TreeNode(preorder[0]);
        root->left = root->right = nullptr;
        if (preorder.size() == 1) return root;
        vector<int>::iterator it = find(inorder.begin(), inorder.end(), preorder[0]);
        vector<int> preorder_left(preorder.begin() + 1, preorder.begin() + 1 + (it - inorder.begin()));
        vector<int> preorder_right(preorder.begin() + 1 + (it - inorder.begin()), preorder.end());
        vector<int> inorder_left(inorder.begin(), it);
        vector<int> inorder_right(it + 1, inorder.end());
        root->left = buildTree(preorder_left, inorder_left);
        root->right = buildTree(preorder_right, inorder_right);
        return root;
    }
};

int main() {
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};
    auto ans = Solution().buildTree(preorder, inorder);
    cout << toString(ans) << endl;
    return 0;
}
