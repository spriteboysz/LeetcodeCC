/**
 * Author: Deean
 * Date: 2022-09-10 14:55
 * FileName: interview/M00020007.cpp
 * Description: 面试题 02.07. 链表相交
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set < ListNode * > set;
        ListNode *cur = headA;
        while (cur) {
            set.insert(cur);
            cur = cur->next;
        }
        cur = headB;
        while (cur) {
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