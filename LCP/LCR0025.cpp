/**
 * Author: Deean
 * Date: 2023-10-11 22:08
 * FileName: LCP
 * Description: LCR 025. 两数相加 II
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        vector<int> stack1, stack2;
        while (l1) {
            stack1.push_back(l1->val);
            l1 = l1->next;
        }
        while (l2) {
            stack2.push_back(l2->val);
            l2 = l2->next;
        }
        int carry = 0;
        vector<int> list;
        while (!stack1.empty() || !stack2.empty() || carry > 0) {
            if (!stack1.empty()) {
                carry += stack1[stack1.size() - 1];
                stack1.pop_back();
            }
            if (!stack2.empty()) {
                carry += stack2[stack2.size() - 1];
                stack2.pop_back();
            }
            list.push_back(carry % 10);
            carry /= 10;
        }
        ListNode *dummy = new ListNode(-1);
        ListNode *cur = dummy;
        for (int i = list.size() - 1; i >= 0; --i) {
            cur->next = new ListNode(list[i]);
            cur = cur->next;
        }
        return dummy->next;
    }
};

int main() {
    ListNode *l1 = stringToList("[7,2,4,3]");
    ListNode *l2 = stringToList("[5,6,4]");
    auto ans = Solution().addTwoNumbers(l1, l2);
    cout << toString(ans) << endl;
    return 0;
}