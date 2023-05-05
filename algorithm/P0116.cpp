/**
 * Author: Deean
 * Date: 2023-05-05 23:09
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;
typedef TreeNode Node;

class Solution {
public:
    Node *connect(Node *root) {
        if (root == nullptr) return nullptr;
        queue < Node * > queue;
        queue.push(root);
        while (!queue.empty()) {
            for (int i = 0, size = queue.size(); i < size; ++i) {
                Node *node = queue.front();
                queue.pop();
                if (i < size - 1) node->next = queue.front();
                if (node->left != nullptr) queue.push(node->left);
                if (node->right != nullptr) queue.push(node->right);
            }
        }
        return root;
    }
};

int main() {
    TreeNode *root = stringToTree("[1,2,3,4,5,6,7]");
    auto ans = Solution().connect(root);
    cout << toString(ans) << endl;
    return 0;
}
