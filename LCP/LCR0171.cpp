/**
 * Author: Deean
 * Date: 2023-10-14 16:59
 * FileName: LCP
 * Description: LCR 171. 训练计划 V
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set < ListNode * > visited;
        while (headA) {
            visited.insert(headA);
            headA = headA->next;
        }
        while (headB) {
            if (visited.count(headB) > 0) {
                return headB;
            }
            headB = headB->next;
        }
        return nullptr;
    }
};

int main() {
    ListNode *headA = stringToList("[4,1,8,4,5]"), *headB = stringToList("[4,1,8,4,5]");
    auto ans = Solution().getIntersectionNode(headA, headB);
    cout << toString(ans) << endl;
    return 0;
}