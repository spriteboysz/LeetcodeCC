/**
 * Author: Deean
 * Date: 2022-09-04 14:17
 * FileName: offer/O0022.cpp
 * Description: 剑指 Offer 22. 链表中倒数第k个节点
 */

#include <ListNode.h>

using namespace std;

class Solution {
public:
    ListNode *getKthFromEnd(ListNode *head, int k) {
        ListNode *fast = head, *slow = head;
        while (fast && k--) {
            fast = fast->next;
        }
        while (fast) {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};

int main() {
    auto ans = Solution().getKthFromEnd(stringToList("[1,2,3,4,5]"), 2);
    cout << listToString(ans) << endl;
    return 0;
}