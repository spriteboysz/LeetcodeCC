/**
 * Author: Deean
 * Date: 2023-04-29 14:08
 * FileName: offer
 * Description: 
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
        for (int i = 0, n = nodes.size(); i < n - 1; ++i) {
            nodes[i]->next = nodes[i + 1];
        }
        nodes[nodes.size() - 1]->next = nullptr;
        return nodes[0];
    }
};

int main() {
    ListNode *head = stringToList("[1,2,3,4,5]");
    auto ans = Solution().reverseList(head);
    cout << toString(ans) << endl;
    return 0;
}
