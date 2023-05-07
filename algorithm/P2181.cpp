/**
 * Author: Deean
 * Date: 2023-05-06 22:59
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *mergeNodes(ListNode *head) {
        ListNode *cur = head->next;
        while (cur && cur->val) {
            if (cur->next->val) {
                cur->val += cur->next->val;
                cur->next = cur->next->next;
            } else {
                cur->next = cur->next->next;
                cur = cur->next;
            }
        }
        return head->next;
    }
};

int main() {
    auto head = stringToList("[0,3,1,0,4,5,2,0]");
    auto ans = Solution().mergeNodes(head);
    cout << toString(ans) << endl;
    return 0;
}
