/**
 * Author: Deean
 * Date: 2023-10-11 21:12
 * FileName: LCP
 * Description: LCR 024. 反转链表
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *reverseList(ListNode *head) {
        if (head == nullptr) return head;
        vector < ListNode * > nodes;
        while (head != nullptr) {
            nodes.push_back(head);
            head = head->next;
        }
        reverse(nodes.begin(), nodes.end());
        int n = nodes.size();
        for (int i = 0; i < n - 1; ++i) {
            nodes[i]->next = nodes[i + 1];
        }
        nodes[n - 1]->next = nullptr;
        return nodes[0];
    }
};

int main() {
    ListNode *head = stringToList("[1,2,3,4,5]");
    auto ans = Solution().reverseList(head);
    cout << toString(ans) << endl;
    return 0;
}