/**
 * Author: Deean
 * Date: 2022-09-04 16:52
 * FileName: interview/M00020002.cpp
 * Description: 面试题 02.02. 返回倒数第 k 个节点
 */

#include "..\common\ListNode.h"

using namespace std;

class Solution {
public:
    int kthToLast(ListNode *head, int k) {
        ListNode *fast = head, *slow = head;
        while (fast && k--) {
            fast = fast->next;
        }
        while (fast) {
            fast = fast->next;
            slow = slow->next;
        }
        return slow->val;
    }
};

int main() {
    auto ans = Solution().kthToLast(stringToList("[1,2,3,4,5]"), 2);
    cout << ans << endl;
    return 0;
}