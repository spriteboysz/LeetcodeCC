/**
 * Author: Deean
 * Date: 2023-10-13 23:38
 * FileName: LCP
 * Description: LCR 141. 训练计划 III
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *trainningPlan(ListNode *head) {
        if (!head || !head->next) return head;
        vector < ListNode * > nodes;
        while (head) {
            nodes.push_back(head);
            head = head->next;
        }
        for (int i = nodes.size() - 1; i > 0; --i) {
            nodes[i]->next = nodes[i - 1];
        }
        nodes[0]->next = nullptr;
        return nodes.back();
    }
};

int main() {
    ListNode *head = stringToList("[1,2,3,4,5]");
    auto ans = Solution().trainningPlan(head);
    cout << toString(ans) << endl;
    return 0;
}