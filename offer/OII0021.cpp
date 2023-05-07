/**
 * Author: Deean
 * Date: 2023-05-06 22:31
 * FileName: offer
 * Description: 
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
    auto head = stringToList("[1,2,3,4,5]");
    auto ans = Solution().removeNthFromEnd(head, 2);
    cout << toString(ans) << endl;
    return 0;
}
