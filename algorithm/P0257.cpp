/**
 * Author: Deean
 * Date: 2023-07-23 15:28
 * FileName: algorithm
 * Description:257. 二叉树的所有路径
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
private:
    vector <string> paths;

public:
    void dfs(TreeNode *root, string path) {
        if (root == nullptr) return;
        path += to_string(root->val);
        if (root->left == nullptr && root->right == nullptr) {
            paths.push_back(path);
        } else {
            path += "->";
            dfs(root->left, path);
            dfs(root->right, path);
        }
    }

    vector <string> binaryTreePaths(TreeNode *root) {
        dfs(root, "");
        return paths;
    }
};

int main() {
    auto root = stringToTree("[1,2,3,null,5]");
    auto ans = Solution().binaryTreePaths(root);
    cout << toString(ans) << endl;
    return 0;
}
