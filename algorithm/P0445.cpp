/**
 * Author: Deean
 * Date: 2023-05-06 21:39
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        stack<int> value1, value2;
        while (l1) {
            value1.push(l1->val);
            l1 = l1->next;
        }
        while (l2) {
            value2.push(l2->val);
            l2 = l2->next;
        }
        int carry = 0;
        ListNode *sum = nullptr;
        while (!value1.empty() || !value2.empty() || carry) {
            int a = value1.empty() ? 0 : value1.top();
            int b = value2.empty() ? 0 : value2.top();
            if (!value1.empty()) value1.pop();
            if (!value2.empty()) value2.pop();
            carry += a + b;
            ListNode *cur = new ListNode(carry % 10);
            carry /= 10;
            cur->next = sum;
            sum = cur;
        }
        return sum;
    }
};

int main() {
    ListNode *l1 = stringToList("[7,2,4,3]");
    ListNode *l2 = stringToList("[5,6,7]");
    auto ans = Solution().addTwoNumbers(l1, l2);
    cout << toString(ans) << endl;
    return 0;
}
