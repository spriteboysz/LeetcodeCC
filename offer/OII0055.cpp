/**
 * Author: Deean
 * Date: 2022-10-12 00:02
 * FileName: offer/OII0055.cpp
 * Description: 剑指 Offer II 055. 二叉搜索树迭代器
 */

#include "../common/leetcode.h"

using namespace std;

class BSTIterator {
private:
    int index;
    vector<int> values;
public:
    void dfs(TreeNode *root) {
        if (root == nullptr) return;
        dfs(root->left);
        values.push_back(root->val);
        dfs(root->right);
    }

    BSTIterator(TreeNode *root) {
        index = 0;
        dfs(root);
    }

    int next() {
        return values[index++];
    }

    bool hasNext() {
        return index < values.size();
    }
};

int main() {
    TreeNode *root = stringToTree("[7,3,15,null,null,9,20]");
    BSTIterator *bSTIterator = new BSTIterator(root);
    cout << bSTIterator->next() << endl;    // 返回 3
    cout << bSTIterator->next() << endl;    // 返回 7
    cout << bSTIterator->hasNext() << endl; // 返回 True
    cout << bSTIterator->next() << endl;    // 返回 9
    cout << bSTIterator->hasNext() << endl; // 返回 True
    cout << bSTIterator->next() << endl;    // 返回 15
    cout << bSTIterator->hasNext() << endl; // 返回 True
    cout << bSTIterator->next() << endl;    // 返回 20
    cout << bSTIterator->hasNext() << endl; // 返回 False
    return 0;
}