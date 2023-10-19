/**
 * Author: Deean
 * Date: 2022-09-05 23:34
 * FileName: algorithm/P0160.cpp
 * Description: 160. 相交链表
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode *> visited;
        ListNode *cur = headA;
        while (cur) {
            visited.emplace(cur);
            cur = cur->next;
        }
        cur = headB;
        while (cur) {
            if (visited.count(cur)) return cur;
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