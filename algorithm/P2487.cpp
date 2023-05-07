/**
 * Author: Deean
 * Date: 2023-05-06 22:37
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *removeNodes(ListNode *head) {
        vector < ListNode * > nodes;
        while (head) {
            nodes.push_back(head);
            head = head->next;
        }
        vector < ListNode * > nodes2;
        int n = nodes.size(), pos = 0;
        nodes2.push_back(nodes[n - 1]);
        for (int i = n - 2; i >= 0; --i) {
            if (nodes[i]->val >= nodes2[pos]->val) {
                nodes2.push_back(nodes[i]);
                pos++;
            }
        }

        for (int i = nodes2.size() - 1; i >= 1; --i) {
            nodes2[i]->next = nodes2[i - 1];
        }
        nodes2[0]->next = nullptr;
        return nodes2[nodes2.size() - 1];
    }
};

int main() {
    auto head = stringToList("[5,2,13,3,8]");
    auto ans = Solution().removeNodes(head);
    cout << toString(ans) << endl;
    return 0;
}
