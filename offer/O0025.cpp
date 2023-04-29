/**
 * Author: Deean
 * Date: 2023-04-29 14:12
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if (l1 == nullptr) return l2;
        if (l2 == nullptr) return l1;
        if (l1->val < l2->val) {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        } else {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
};

int main() {
    ListNode *l1 = stringToList("[1,2,4]");
    ListNode *l2 = stringToList("[1,3,4]");
    auto ans = Solution().mergeTwoLists(l1, l2);
    cout << toString(ans) << endl;
    return 0;
}
