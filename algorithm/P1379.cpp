/**
 * Author: Deean
 * Date: 2023-04-19 22:00
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target) {
        if (!original) return nullptr;
        if (original == target) return cloned;
        TreeNode *left = getTargetCopy(original->left, cloned->left, target);
        if (left) return left;
        TreeNode *right = getTargetCopy(original->right, cloned->right, target);
        if (right) return right;
        return nullptr;
    }
};

int main() {
    TreeNode *original = stringToTree("[7,4,3,null,null,6,19]");
    TreeNode *cloned = stringToTree("[7,4,3,null,null,6,19]");
    TreeNode *target = stringToTree("[3]");
    auto ans = Solution().getTargetCopy(original, cloned, target);
    cout << toString(ans) << endl;
    return 0;
}
