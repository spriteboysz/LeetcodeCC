/**
 * Author: Deean
 * Date: 2023-10-11 22:24
 * FileName: LCP
 * Description: LCR 026. 重排链表
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    void reorderList(ListNode *head) {
        if (head == nullptr || head->next == nullptr) return;
        vector < ListNode * > nodes1, nodes2;
        auto cur = head;
        while (cur) {
            nodes1.push_back(cur);
            cur = cur->next;
        }
        int n = nodes1.size();
        for (int i = 0; i <= n / 2; ++i) {
            nodes2.push_back(nodes1[i]);
            nodes2.push_back(nodes1[n - 1 - i]);
        }
        for (int i = 0; i < n - 1; ++i) {
            nodes2[i]->next = nodes2[i + 1];
        }
        nodes2[n - 1]->next = nullptr;
        cout << toString(head) << endl;
    }
};

int main() {
    ListNode *head = stringToList("[1,2,3,4,5]");
    Solution().reorderList(head);
    return 0;
}