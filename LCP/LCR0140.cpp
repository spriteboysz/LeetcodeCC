/**
 * Author: Deean
 * Date: 2023-10-13 23:35
 * FileName: LCP
 * Description: LCR 140. 训练计划 II
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *trainingPlan(ListNode *head, int cnt) {
        int n = 0;
        ListNode *node;
        for (node = head; node; node = node->next) {
            n++;
        }
        for (node = head; n > cnt; n--) {
            node = node->next;
        }
        return node;
    }
};

int main() {
    ListNode *head = stringToList("[2,4,7,8]");
    auto ans = Solution().trainingPlan(head, 1);
    cout << toString(ans) << endl;
    return 0;
}