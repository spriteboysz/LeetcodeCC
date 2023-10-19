/**
 * Author: Deean
 * Date: 2022-09-04 22:10
 * FileName: algorithm/P0559.cpp
 * Description: 559. N 叉树的最大深度
 */

#include "../common/leetcode.h"

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
public:
    int maxDepth(Node *root) {
        if (root == nullptr) return 0;
        int maxChildDepth = 0;
        for (auto child: root->children) {
            int childDepth = maxDepth(child);
            maxChildDepth = max(maxChildDepth, childDepth);
        }
        return maxChildDepth + 1;
    }
};

int main() {
    Node *root = new Node(0);
    auto ans = Solution().maxDepth(root);
    cout << ans << endl;
    return 0;
}