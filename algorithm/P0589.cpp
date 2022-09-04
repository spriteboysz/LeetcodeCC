/**
 * Author: Deean
 * Date: 2022-09-04 22:06
 * FileName: algorithm/P0589.cpp
 * Description: 589. N 叉树的前序遍历
 */

#include <leetcode.h>

using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node *> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
private:
    vector<int> values;
public:
    void dfs(Node *node) {
        if (node == nullptr) return;
        values.push_back(node->val);
        for (Node *child: node->children) {
            dfs(child);
        }
    }

    vector<int> preorder(Node *root) {
        dfs(root);
        return values;
    }
};

int main() {
    Node *root = new Node(0);
    auto ans = Solution().preorder(root);
    cout << vectorToString(ans) << endl;
    return 0;
}