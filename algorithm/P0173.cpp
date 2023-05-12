/**
 * Author: Deean
 * Date: 2023-05-12 21:49
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class BSTIterator {
public:
    vector<int> values;
    int pos = 0;

    void dfs(TreeNode *root) {
        if (root == nullptr) return;
        dfs(root->left);
        values.push_back(root->val);
        dfs(root->right);
    }

    BSTIterator(TreeNode *root) {
        dfs(root);
    }

    int next() {
        return values[pos++];
    }

    bool hasNext() {
        return pos < values.size();
    }
};

int main() {
    auto root = stringToTree("[7, 3, 15, null, null, 9, 20]");
    auto obj = new BSTIterator(root);
    cout << obj->next() << endl;
    cout << obj->hasNext() << endl;
    return 0;
}
