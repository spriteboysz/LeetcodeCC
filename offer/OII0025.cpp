/**
 * Author: Deean
 * Date: 2022-10-10 23:17
 * FileName: offer/OII0025.cpp
 * Description: 
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        vector<int> nums1, nums2, sum;
        while (l1) {
            nums1.push_back(l1->val);
            l1 = l1->next;
        }
        while (l2) {
            nums2.push_back(l2->val);
            l2 = l2->next;
        }
        int carry = 0;
        while (nums1.size() > 0 || nums2.size() > 0 || carry > 0) {
            if (nums1.size() > 0) {
                carry += nums1.at(nums1.size() - 1);
                nums1.pop_back();
            }
            if (nums2.size() > 0) {
                carry += nums2.at(nums2.size() - 1);
                nums2.pop_back();
            }
            sum.push_back(carry % 10);
            carry /= 10;
        }
        std::reverse(sum.begin(), sum.end());
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
    ListNode *l1 = stringToList("[2,4,3]");
    ListNode *l2 = stringToList("[5,6,4]");
    auto ans = Solution().addTwoNumbers(l1, l2);
    cout << toString(ans) << endl;
    return 0;
}