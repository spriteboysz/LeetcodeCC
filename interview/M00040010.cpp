/**
 * Author: Deean
 * Date: 2023-07-15 22:45
 * FileName: interview
 * Description:面试题 04.10. 检查子树
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
private:
    bool check(TreeNode *t1, TreeNode *t2) {
        if (t2 == nullptr) return true;
        if (t1 == nullptr || t1->val != t2->val) {
            return false;
        }
        return check(t1->left, t2->left) && check(t1->right, t2->right);
    }

public:
    bool isSubStructure(TreeNode *t1, TreeNode *t2) {
        if (t1 == nullptr || t2 == nullptr) return false;
        return check(t1, t2) || isSubStructure(t1->left, t2) || isSubStructure(t1->right, t2);
    }
};

int main() {
    auto t1 = stringToTree("[1, 2, 3]");
    auto t2 = stringToTree("[2]");
    auto ans = Solution().isSubStructure(t1, t2);
    cout << toString(ans) << endl;
    return 0;
}
