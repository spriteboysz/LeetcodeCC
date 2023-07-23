/**
 * Author: Deean
 * Date: 2023-07-23 23:02
 * FileName: algorithm
 * Description:86. 分隔链表
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *partition(ListNode *head, int x) {
        if (!head) return nullptr;
        vector<ListNode *> nodes, gt;
        while (head) {
            if (head->val < x) {
                nodes.push_back(head);
            } else {
                gt.push_back(head);
            }
            head = head->next;
        }
        for (auto node: gt) {
            nodes.push_back(node);
        }
        for (int i = 1, n = nodes.size(); i < n; ++i) {
            nodes[i - 1]->next = nodes[i];
        }
        nodes.back()->next = nullptr;
        return nodes.front();
    }
};

int main() {
    auto head = stringToList("[1,4,3,2,5,2]");
    auto ans = Solution().partition(head, 3);
    cout << toString(ans) << endl;
    return 0;
}
