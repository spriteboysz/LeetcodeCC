/**
 * Author: Deean
 * Date: 2023-05-14 11:36
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        if (postorder.empty()) return nullptr;
        TreeNode *root = new TreeNode(postorder.back());
        if (postorder.size() == 1) return root;
        auto it = find(inorder.begin(), inorder.end(), postorder.back());
        postorder.pop_back();
        vector<int> left_in(inorder.begin(), it);
        vector<int> left_post(postorder.begin(), postorder.begin() + left_in.size());
        vector<int> right_in(it + 1, inorder.end());
        vector<int> right_post(postorder.begin() + left_in.size(), postorder.end());
        root->left = buildTree(left_in, left_post);
        root->right = buildTree(right_in, right_post);
        return root;
    }
};

int main() {
    vector<int> inorder = {9, 3, 15, 20, 7};
    vector<int> postorder = {9, 15, 7, 20, 3};
    auto ans = Solution().buildTree(inorder, postorder);
    cout << toString(ans) << endl;
    return 0;
}
