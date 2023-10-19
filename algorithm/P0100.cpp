/**
 * Author: Deean
 * Date: 2022-09-06 22:49
 * FileName: algorithm/P0100.cpp
 * Description: 100. 相同的树
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    bool isSameTree(TreeNode *p, TreeNode *q) {
        if (p == nullptr && q == nullptr) {
            return true;
        } else if (p == nullptr || q == nullptr) {
            return false;
        } else if (p->val != q->val) {
            return false;
        } else {
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }
    }
};

int main() {
    auto ans = Solution().isSameTree(stringToTree("[1,2,3]"), stringToTree("[1,2,3]"));
    cout << toString(ans) << endl;
    ans = Solution().isSameTree(stringToTree("[1,2]"), stringToTree("[1,null,2]"));
    cout << toString(ans) << endl;
    return 0;
}