/**
 * Author: Deean
 * Date: 2022-09-05 23:19
 * FileName: offer/OII0023.cpp
 * Description: 剑指 Offer II 023. 两个链表的第一个重合节点
 */

#include <leetcode.h>
#include <ListNode.h>

using namespace std;

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode *> set;
        ListNode *cur = headA;
        while (cur != nullptr) {
            set.insert(cur);
            cur = cur->next;
        }
        cur = headB;
        while (cur != nullptr) {
            if (set.count(cur)) return cur;
            cur = cur->next;
        }
        return nullptr;
    }
};

int main() {
    auto ans = Solution().getIntersectionNode(stringToList("[0,9,1,2,4]"), stringToList("[3,2,4]"));
    cout << toString(ans) << endl;
    return 0;
}