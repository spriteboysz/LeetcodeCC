/**
 * Author: Deean
 * Date: 2023-04-28 21:40
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *removeElements(ListNode *head, int val) {
        if (head == nullptr) return head;
        head->next = removeElements(head->next, val);
        if (head->val == val) {
            return head->next;
        }
        return head;
    }
};

int main() {
    ListNode *head = stringToList("[1,2,6,3,4,5,6]");
    auto ans = Solution().removeElements(head, 6);
    cout << toString(ans) << endl;
    return 0;
}
