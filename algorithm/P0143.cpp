/**
 * Author: Deean
 * Date: 2023-07-23 22:30
 * FileName: algorithm
 * Description:143. 重排链表
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    void reorderList(ListNode *head) {
        vector < ListNode * > nodes, nodes2;
        while (head) {
            nodes.push_back(head);
            head = head->next;
        }
        for (int i = 0, n = nodes.size(); i <= n / 2; ++i) {
            nodes2.push_back(nodes[i]);
            if (i < n - 1 - i) {
                nodes2.push_back(nodes[n - 1 - i]);
            }
        }
        for (int i = 1, n = nodes2.size(); i < n; ++i) {
            nodes2[i - 1]->next = nodes2[i];
        }
        nodes2.back()->next = nullptr;
        head = nodes2.front();
        cout << toString(head) << endl;
    }
};

int main() {
    auto head = stringToList("[1,2,3,4,5]");
    Solution().reorderList(head);
    return 0;
}
