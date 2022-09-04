/**
 * Author: Deean
 * Date: 2022-09-04 13:33
 * FileName: algorithm/P2130.cpp
 * Description: 2130. 链表最大孪生和
 */

#include <leetcode.h>
#include <ListNode.h>

using namespace std;

class Solution {
public:
    int pairSum(ListNode *head) {
        vector<int> values;
        while (head) {
            values.push_back(head->val);
            head = head->next;
        }
        int maximum = 0;
        for (int i = 0; i <= values.size() / 2; ++i) {
            maximum = max(maximum, values[i] + values[values.size() - 1 - i]);
        }
        return maximum;
    }
};

int main() {
    auto ans = Solution().pairSum(stringToList("[4,2,2,3]"));
    cout << ans << endl;
    return 0;
}