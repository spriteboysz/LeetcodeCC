/**
 * Author: Deean
 * Date: 2023-07-23 23:52
 * FileName: algorithm
 * Description:24. 两两交换链表中的节点
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        if (!head) return nullptr;
        vector < ListNode * > nodes;
        while (head) {
            nodes.push_back(head);
            head = head->next;
        }
        for (int i = 0, n = nodes.size(); i < n; i += 2) {
            if (i + 1 < n) {
                swap(nodes[i], nodes[i + 1]);
            }
        }
        for (int i = 1, n = nodes.size(); i < n; ++i) {
            nodes[i - 1]->next = nodes[i];
        }
        nodes.back()->next = nullptr;
        return nodes.front();
    }
};

int main() {
    auto head = stringToList("[1,2,3,4]");
    auto ans = Solution().swapPairs(head);
    cout << toString(ans) << endl;
    return 0;
}
