/**
 * Author: Deean
 * Date: 2022-09-04 10:06
 * FileName: algorithm/P2236.cpp
 * Description: 2236. 判断根结点是否等于子结点之和
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    bool checkTree(TreeNode *root) {
        return root->val == root->left->val + root->right->val;
    }
};

int main() {
    auto ans = Solution().checkTree(stringToTree("[10,4,6]"));
    cout << ans << endl;
    return 0;
}