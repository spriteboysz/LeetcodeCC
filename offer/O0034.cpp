/**
 * Author: Deean
 * Date: 2023-05-18 23:15
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<int>> paths;
    vector<int> path;

    void backtrace(TreeNode *root, int target) {
        if (root == nullptr) return;
        path.push_back(root->val);
        target -= root->val;
        if (root->left == nullptr && root->right == nullptr && target == 0) {
            paths.push_back(path);
        }
        backtrace(root->left, target);
        backtrace(root->right, target);
        path.pop_back();
    }

    vector <vector<int>> pathSum(TreeNode *root, int target) {
        paths.clear();
        path.clear();
        backtrace(root, target);
        return paths;
    }
};

int main() {
    auto root = stringToTree("[5,4,8,11,null,13,4,7,2,null,null,5,1]");
    auto ans = Solution().pathSum(root, 22);
    cout << toString(ans) << endl;
    return 0;
}
