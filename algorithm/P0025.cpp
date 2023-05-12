/**
 * Author: Deean
 * Date: 2023-05-11 23:06
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *reverseKGroup(ListNode *head, int k) {
        vector < ListNode * > nodes;
        while (head) {
            nodes.push_back(head);
            head = head->next;
        }
        for (int i = 0, n = nodes.size(); i + k <= n; i += k) {
            reverse(nodes.begin() + i, nodes.begin() + i + k);
        }
        for (int i = 0, n = nodes.size(); i < n - 1; ++i) {
            nodes[i]->next = nodes[i + 1];
        }
        nodes.back()->next = nullptr;
        return nodes.front();
    }
};

int main() {
    auto head = stringToList("[1,2,3,4,5]");
    auto ans = Solution().reverseKGroup(head, 2);
    cout << toString(ans) << endl;
    return 0;
}
