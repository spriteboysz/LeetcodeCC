/**
 * Author: Deean
 * Date: 2023-05-06 22:22
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *dummy = new ListNode(0);
        ListNode *cur = dummy;
        int carry = 0;
        while (l1 || l2 || carry) {
            if (l1) {
                carry += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                carry += l2->val;
                l2 = l2->next;
            }
            cur->next = new ListNode(carry % 10);
            cur = cur->next;
            carry /= 10;
        }
        return dummy->next;
    }
};

int main() {
    auto l1 = stringToList("[7,1,6]");
    auto l2 = stringToList("[5,9,2]");
    auto ans = Solution().addTwoNumbers(l1, l2);
    cout << toString(ans) << endl;
    return 0;
}
