/**
 * Author: Deean
 * Date: 2023-05-07 23:10
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int cnt = 0;

    void dfs(TreeNode *root) {
        if (root == nullptr) return;
        dfs(root->left);
        cnt += 1;
        dfs(root->right);
    }

    int countNodes(TreeNode *root) {
        dfs(root);
        return cnt;
    }
};

int main() {
    auto root = stringToTree("[1,2,3,4,5,6]");
    auto ans = Solution().countNodes(root);
    cout << toString(ans) << endl;
    return 0;
}
