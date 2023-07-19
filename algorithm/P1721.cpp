/**
 * Author: Deean
 * Date: 2023-07-19 22:34
 * FileName: algorithm
 * Description:1721. 交换链表中的节点
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *swapNodes(ListNode *head, int k) {
        vector < ListNode * > nodes;
        while (head) {
            nodes.push_back(head);
            head = head->next;
        }
        int n = nodes.size();
        ListNode *temp = nodes[k - 1];
        nodes[k - 1] = nodes[n - k];
        nodes[n - k] = temp;
        for (int i = 1; i < n; ++i) {
            nodes[i - 1]->next = nodes[i];
        }
        nodes[n - 1]->next = nullptr;
        return nodes[0];
    }
};

int main() {
    auto head = stringToList("[1,2,3,4,5]");
    auto ans = Solution().swapNodes(head, 2);
    cout << toString(ans) << endl;
    return 0;
}
