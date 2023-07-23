/**
 * Author: Deean
 * Date: 2023-07-23 22:06
 * FileName: algorithm
 * Description:148. 排序链表
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *sortList(ListNode *head) {
        if (!head) return head;
        vector < ListNode * > nodes;
        while (head) {
            nodes.push_back(head);
            head = head->next;
        }
        sort(nodes.begin(), nodes.end(), [&](ListNode *n1, ListNode *n2) -> bool {
            return n1->val < n2->val;
        });
        for (int i = 1, n = nodes.size(); i < n; ++i) {
            nodes[i - 1]->next = nodes[i];
        }
        nodes.back()->next = nullptr;
        return nodes.front();
    }
};

int main() {
    auto head = stringToList("[-1,5,3,4,0]");
    auto ans = Solution().sortList(head);
    cout << toString(ans) << endl;
    return 0;
}
