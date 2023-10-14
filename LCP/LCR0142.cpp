/**
 * Author: Deean
 * Date: 2023-10-14 10:46
 * FileName: LCP
 * Description: LCR 142. 训练计划 IV
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *trainningPlan(ListNode *l1, ListNode *l2) {
        if (!l1) return l2;
        if (!l2) return l1;
        vector < ListNode * > nodes;
        while (l1) {
            nodes.push_back(l1);
            l1 = l1->next;
        }
        while (l2) {
            nodes.push_back(l2);
            l2 = l2->next;
        }
        std::sort(nodes.begin(), nodes.end(), [&](ListNode *n1, ListNode *n2) -> bool {
            return n1->val < n2->val;
        });
        for (int i = 0, n = nodes.size(); i < n - 1; ++i) {
            nodes[i]->next = nodes[i + 1];
        }
        nodes[nodes.size() - 1]->next = nullptr;
        return nodes.front();
    }
};

int main() {
    ListNode *l1 = stringToList("[1,2,4]"), *l2 = stringToList("[[1,3,4]");
    auto ans = Solution().trainningPlan(l1, l2);
    cout << toString(ans) << endl;
    return 0;
}