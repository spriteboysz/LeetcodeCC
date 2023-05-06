/**
 * Author: Deean
 * Date: 2023-05-06 22:11
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<ListNode *> listOfDepth(TreeNode *tree) {
        vector < ListNode * > levels;
        if (tree == nullptr) return levels;
        queue < TreeNode * > queue;
        queue.emplace(tree);
        while (!queue.empty()) {
            ListNode *head = new ListNode(0);
            ListNode *cur = head;
            for (int i = 0, n = queue.size(); i < n; ++i) {
                auto node = queue.front();
                queue.pop();
                cur->next = new ListNode(node->val);
                cur = cur->next;
                if (node->left) queue.emplace(node->left);
                if (node->right) queue.emplace(node->right);
            }
            levels.push_back(head->next);
        }
        return levels;
    }
};

int main() {
    auto tree = stringToTree("[1,2,3,4,5,null,7,8]");
    auto ans = Solution().listOfDepth(tree);
    cout << toString(ans) << endl;
    return 0;
}
