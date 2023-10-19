/**
 * Author: Deean
 * Date: 2022-09-07 23:59
 * FileName: offer/O0052.cpp
 * Description: 剑指 Offer 52. 两个链表的第一个公共节点
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode *> visited;
        ListNode *cur = headA;
        while (cur != nullptr) {
            visited.insert(cur);
            cur = cur->next;
        }
        cur = headB;
        while (cur != nullptr) {
            if (visited.count(cur)) return cur;
            cur = cur->next;
        }
        return nullptr;
    }
};

int main() {
    auto ans = Solution().getIntersectionNode(stringToList("[4,1,8,4,5]"), stringToList("[5,0,1,8,4,5]"));
    cout << toString(ans) << endl;
    return 0;
}