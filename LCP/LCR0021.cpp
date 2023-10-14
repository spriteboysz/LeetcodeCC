/**
 * Author: Deean
 * Date: 2023-10-11 20:59
 * FileName: LCP
 * Description: LCR 021. 删除链表的倒数第 N 个结点
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *dummy = new ListNode(0, head);
        ListNode *fast = head, *slow = dummy;
        for (int i = 0; i < n; ++i) {
            fast = fast->next;
        }
        while (fast) {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return dummy->next;
    }
};

int main() {
    ListNode *head = stringToList("[1,2,3,4,5]");
    auto ans = Solution().removeNthFromEnd(head, 2);
    cout << toString(ans) << endl;
    return 0;
}