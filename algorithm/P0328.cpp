/**
 * Author: Deean
 * Date: 2023-07-23 15:02
 * FileName: algorithm
 * Description:328. 奇偶链表
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *oddEvenList(ListNode *head) {
        if (!head) return nullptr;
        vector < ListNode * > odd, even;
        while (head) {
            odd.push_back(head);
            head = head->next;
            if (head) {
                even.push_back(head);
                head = head->next;
            }
        }
        for (auto node: even) {
            odd.push_back(node);
        }
        for (int i = 1, n = odd.size(); i < n; ++i) {
            odd[i - 1]->next = odd[i];
        }
        odd[odd.size() - 1]->next = nullptr;
        return odd[0];
    }
};

int main() {
    auto head = stringToList("[2,1,3,5,6,4,7]");
    auto ans = Solution().oddEvenList(head);
    cout << toString(ans) << endl;
    return 0;
}
