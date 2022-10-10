/**
 * Author: Deean
 * Date: 2022-10-09 23:20
 * FileName: algorithm/P0002.cpp
 * Description: 2. 两数相加
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        vector<int> sum;
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
            sum.push_back(carry % 10);
            carry /= 10;
        }
        ListNode *dummy = new ListNode(-1);
        ListNode *cur = dummy;
        for (int i = 0; i < sum.size(); ++i) {
            cur->next = new ListNode(sum[i]);
            cur = cur->next;
        }
        return dummy->next;
    }
};

int main() {
    ListNode *l1 = stringToList("[9,9,9,9,9,9,9]");
    ListNode *l2 = stringToList("[9,9,9,9]");
    auto ans = Solution().addTwoNumbers(l1, l2);
    cout << toString(ans) << endl;
    return 0;
}