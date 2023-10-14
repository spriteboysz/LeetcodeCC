/**
 * Author: Deean
 * Date: 2023-10-13 21:59
 * FileName: LCP
 * Description: LCR 077. 排序链表
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *sortList(ListNode *head) {
        if (head == nullptr) return head;
        vector < ListNode * > nodes;
        while (head) {
            nodes.push_back(head);
            head = head->next;
        }
        sort(nodes.begin(), nodes.end(), [&](ListNode *a, ListNode *b) {
            return a->val < b->val;
        });
        for (int i = 0, n = nodes.size(); i < n - 1; ++i) {
            nodes[i]->next = nodes[i + 1];
        }
        nodes[nodes.size() - 1]->next = nullptr;
        return nodes[0];
    }
};

int main() {
    ListNode *head = stringToList("[4,2,1,3]");
    auto ans = Solution().sortList(head);
    cout << toString(ans) << endl;
    return 0;
}