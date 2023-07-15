/**
 * Author: Deean
 * Date: 2023-07-14 22:40
 * FileName: algorithm
 * Description:2265. 统计值等于子树平均值的节点数
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int cnt = 0;

    vector<int> dfs(TreeNode *root) {
        if (!root) return {0, 0};
        int count = 1, sum = root->val;
        vector<int> left = dfs(root->left);
        vector<int> right = dfs(root->right);
        count += left[0] + right[0];
        sum += left[1] + right[1];
        if (sum / count == root->val) cnt += 1;
        return {count, sum};
    }

    int averageOfSubtree(TreeNode *root) {
        dfs(root);
        return cnt;
    }
};

int main() {
    auto ans = Solution().averageOfSubtree(stringToTree("[4,8,5,0,1,null,6]"));
    cout << toString(ans) << endl;
    return 0;
}
