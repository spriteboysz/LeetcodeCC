/**
 * Author: Deean
 * Date: 2023-07-23 22:57
 * FileName: algorithm
 * Description:92. 反转链表 II
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *reverseBetween(ListNode *head, int left, int right) {
        if (!head) return nullptr;
        vector < ListNode * > nodes;
        while (head) {
            nodes.push_back(head);
            head = head->next;
        }
        std::reverse(nodes.begin() + left - 1, nodes.begin() + right);
        for (int i = 1, n = nodes.size(); i < n; ++i) {
            nodes[i - 1]->next = nodes[i];
        }
        nodes.back()->next = nullptr;
        return nodes.front();
    }
};

int main() {
    auto head = stringToList("[1,2,3,4,5]");
    auto ans = Solution().reverseBetween(head, 2, 4);
    cout << toString(ans) << endl;
    return 0;
}
