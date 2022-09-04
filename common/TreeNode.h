/**
 * Author: Deean
 * Date: 2022-09-03 08:34
 * FileName: common/TreeNode.h
 * Description: TreeNode
 */

#ifndef tree_node_h
#define tree_node_h

#include <queue>
#include <string>
#include <codec.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

string nilToken = "null";

TreeNode *stringToTree(string str) {
    auto v = stringToVector(str);
    if (v.empty()) return NULL;
    queue<TreeNode *> queue;
    auto root = new TreeNode(stoi(v[0]));
    queue.push(root);
    for (int i = 1, N = v.size(); i < N;) {
        auto node = queue.front();
        queue.pop();
        if (v[i] != nilToken) queue.push(node->left = new TreeNode(stoi(v[i])));
        ++i;
        if (i < N && v[i] != nilToken) queue.push(node->right = new TreeNode(stoi(v[i])));
        ++i;
    }
    return root;
}

string treeToString(TreeNode *root) {
    vector<string> v;
    if (!root) return vectorToString(v);
    queue<TreeNode *> queue;
    queue.push(root);
    while (queue.size()) {
        root = queue.front();
        queue.pop();
        if (root) {
            v.push_back(to_string(root->val));
            queue.push(root->left);
            queue.push(root->right);
        } else {
            v.push_back(nilToken);
        }
    }
    while (v.back() == nilToken) v.pop_back();
    return vectorToString(v);
}

string toString(TreeNode *root) {
    return treeToString(root);
}

#endif
