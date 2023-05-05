/**
 * Author: Deean
 * Date: 2023-05-05 22:12
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> values;

    TreeNode *createBST(int left, int right) {
        if (left >= right) return nullptr;
        int mid = left + (right - left) / 2;
        TreeNode *root = new TreeNode(values[mid]);
        root->left = createBST(left, mid);
        root->right = createBST(mid + 1, right);
        return root;
    }

    TreeNode *sortedListToBST(ListNode *head) {
        if (head == nullptr) return nullptr;
        while (head != nullptr) {
            values.push_back(head->val);
            head = head->next;
        }
        return createBST(0, values.size());
    }
};

int main() {
    ListNode *head = stringToList("[-10,-3,0,5,9]");
    auto ans = Solution().sortedListToBST(head);
    cout << toString(ans) << endl;
    return 0;
}
