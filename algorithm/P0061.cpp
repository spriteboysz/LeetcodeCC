/**
 * Author: Deean
 * Date: 2023-05-05 22:53
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *rotateRight(ListNode *head, int k) {
        if (head == nullptr || k == 0) return head;
        int n = 0;
        ListNode *tail;
        for (ListNode *p = head; p; p = p->next) {
            n++;
            tail = p;
        }
        k %= n;
        ListNode *p = head;
        for (int i = 0; i < n - k - 1; ++i) {
            p = p->next;
        }
        tail->next = head;
        head = p->next;
        p->next = nullptr;
        return head;
    }
};

int main() {
    ListNode *head = stringToList("[1,2,3,4,5]");
    auto ans = Solution().rotateRight(head, 2);
    cout << toString(ans) << endl;
    return 0;
}
