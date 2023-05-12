/**
 * Author: Deean
 * Date: 2023-05-11 23:31
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *partition(ListNode *head, int x) {
        if (head == nullptr) return head;
        vector<int> values, gt;
        ListNode *cur = head;
        while (cur) {
            if (cur->val < x) {
                values.push_back(cur->val);
            } else {
                gt.push_back(cur->val);
            }
            cur = cur->next;
        }
        for (int i = 0, n = gt.size(); i < n; ++i) {
            values.push_back(gt[i]);
        }
        cur = head;
        int pos = 0;
        while (cur) {
            cur->val = values[pos++];
            cur = cur->next;
        }
        return head;
    }
};

int main() {
    auto head = stringToList("[1,4,3,2,5,2]");
    auto ans = Solution().partition(head, 3);
    cout << toString(ans) << endl;
    return 0;
}
