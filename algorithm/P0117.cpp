/**
 * Author: Deean
 * Date: 2023-05-05 23:17
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;
typedef TreeNode Node;

class Solution {
public:
    Node *connect(Node *root) {
        if (root == nullptr) return root;
        queue < Node * > queue;
        queue.push(root);
        while (!queue.empty()) {
            for (int i = 0, n = queue.size(); i < n; ++i) {
                Node *node = queue.front();
                queue.pop();
                if (i < n - 1) node->next = queue.front();
                if (node->left != nullptr) queue.push(node->left);
                if (node->right != nullptr) queue.push(node->right);
            }
        }
        return root;
    }
};

int main() {
    TreeNode *root = stringToTree("[1,2,3,4,5,null,7]");
    auto ans = Solution().connect(root);
    cout << toString(ans) << endl;
    return 0;
}
