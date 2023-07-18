/**
 * Author: Deean
 * Date: 2023-07-18 23:40
 * FileName: algorithm
 * Description:2095. 删除链表的中间节点
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *deleteMiddle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        ListNode *fast = head, *slow = head, *pre = nullptr;
        while (fast && fast->next) {
            fast = fast->next->next;
            pre = slow;
            slow = slow->next;
        }
        pre->next = pre->next->next;
        return head;
    }
};

int main() {
    auto ans = Solution().deleteMiddle(stringToList("[1,3,4,7,1,2,6]"));
    cout << toString(ans) << endl;
    return 0;
}
