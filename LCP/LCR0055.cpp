/**
 * Author: Deean
 * Date: 2023-10-12 23:19
 * FileName: LCP
 * Description: LCR 055. 二叉搜索树迭代器
 */

#include "..\common\leetcode.h"

using namespace std;

class BSTIterator {
public:
    vector<int> values;

    void dfs(TreeNode *root) {
        if (!root) return;
        dfs(root->left);
        values.push_back(root->val);
        dfs(root->right);
    }

    int pos = 0;

    BSTIterator(TreeNode *root) {
        dfs(root);
    }

    int next() {
        if (pos < values.size()) {
            return values[pos++];
        }
        return -1;
    }

    bool hasNext() {
        return pos < values.size();
    }
};

int main() {
    TreeNode *root = stringToTree("[7, 3, 15, null, null, 9, 20]");
    BSTIterator *obj = new BSTIterator(root);
    cout << obj->next() << endl;
    cout << obj->hasNext() << endl;
    return 0;
}