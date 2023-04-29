/**
 * Author: Deean
 * Date: 2023-04-29 13:54
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *deleteNode(ListNode *head, int val) {
        if (head == nullptr) return head;
        if (head->val == val) return head->next;
        ListNode *cur = head;
        while (cur->next != nullptr) {
            if (cur->next->val == val) {
                cur->next = cur->next->next;
                break;
            }
            cur = cur->next;
        }
        return head;
    }
};

int main() {
    ListNode *head = stringToList("[4,5,1,9]");
    auto ans = Solution().deleteNode(head, 5);
    cout << toString(ans) << endl;
    return 0;
}
