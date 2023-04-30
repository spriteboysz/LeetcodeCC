/**
 * Author: Deean
 * Date: 2023-04-30 17:12
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *removeDuplicateNodes(ListNode *head) {
        if (head == nullptr) return head;
        unordered_set<int> seen = {head->val};
        ListNode *pos = head;
        while (pos->next != nullptr) {
            if (!seen.count(pos->next->val)) {
                seen.emplace(pos->next->val);
                pos = pos->next;
            } else {
                pos->next = pos->next->next;
            }
        }
        pos->next = nullptr;
        return head;
    }
};

int main() {
    ListNode *head = stringToList("[1,2,3,3,2,1]");
    auto ans = Solution().removeDuplicateNodes(head);
    cout << toString(ans) << endl;
    return 0;
}
