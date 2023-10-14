/**
 * Author: Deean
 * Date: 2023-10-11 21:02
 * FileName: LCP
 * Description: LCR 022. 环形链表 II
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set < ListNode * > visited;
        while (head) {
            if (visited.count(head) > 0) {
                return head;
            }
            visited.emplace(head);
            head = head->next;
        }
        return nullptr;
    }
};

int main() {
    ListNode *head = stringToList("[3,2,0,-4]");
    auto ans = Solution().detectCycle(head);
    cout << toString(ans) << endl;
    return 0;
}