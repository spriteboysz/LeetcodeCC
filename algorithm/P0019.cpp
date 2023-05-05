/**
 * Author: Deean
 * Date: 2023-05-05 22:45
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *dummy = new ListNode(0, head);
        ListNode *fast = head, *slow = dummy;
        while (n) {
            fast = fast->next;
            n--;
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
