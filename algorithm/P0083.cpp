/**
 * Author: Deean
 * Date: 2023-04-29 12:06
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        if (head == nullptr) return head;
        ListNode *cur = head;
        while (cur->next) {
            if (cur->val == cur->next->val) {
                cur->next = cur->next->next;
            } else {
                cur = cur->next;
            }
        }
        return head;
    }
};

int main() {
    ListNode *head = stringToList("[1,1,2,3,3]");
    auto ans = Solution().deleteDuplicates(head);
    cout << toString(ans) << endl;
    return 0;
}
