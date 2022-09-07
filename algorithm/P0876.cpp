
/**
 * Author: Deean
 * Date: 2022-09-07 22:26
 * FileName: algorithm/P0876.cpp
 * Description: 876. 链表的中间结点
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    ListNode *middleNode(ListNode *head) {
        ListNode *fast = head, *slow = head;
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
};

int main() {
    auto ans = Solution().middleNode(stringToList("[1,2,3,4,5]"));
    cout << toString(ans) << endl;
    ans = Solution().middleNode(stringToList("[1,2,3,4,5,6]"));
    cout << toString(ans) << endl;
    return 0;
}