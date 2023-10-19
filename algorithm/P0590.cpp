/**
 * Author: Deean
 * Date: 2022-09-04 21:58
 * FileName: algorithm/P0590.cpp
 * Description: 590. N 叉树的后序遍历
 */

#include "../common/leetcode.h"

using namespace std;

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
        for (Node *child: node->children) {
            dfs(child);
        }
        values.push_back(node->val);
    }

    vector<int> postorder(Node *root) {
        dfs(root);
        return values;
    }
};

int main() {
    Node *root = new Node(0);
    auto ans = Solution().postorder(root);
    cout << vectorToString(ans) << endl;
    return 0;
}