/**
 * Author: Deean
 * Date: 2023-04-28 22:44
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;
        if (list1->val < list2->val) {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        } else {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};

int main() {
    ListNode *list1 = stringToList("[1,2,4]");
    ListNode *list2 = stringToList("[1,3,4]");
    auto ans = Solution().mergeTwoLists(list1, list2);
    cout << toString(ans) << endl;
    return 0;
}
