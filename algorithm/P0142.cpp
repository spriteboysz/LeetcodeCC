/**
 * Author: Deean
 * Date: 2023-07-23 22:38
 * FileName: algorithm
 * Description:142. 环形链表 II
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (!head) return nullptr;
        unordered_set < ListNode * > visited;
        while (head) {
            if (visited.count(head)) {
                return head;
            }
            visited.insert(head);
            head = head->next;
        }
        return nullptr;
    }
};

int main() {
    auto head = stringToList("[3,2,0,-4]");
    auto ans = Solution().detectCycle(head);
    cout << toString(ans) << endl;
    return 0;
}
