/**
 * Author: Deean
 * Date: 2023-10-11 22:33
 * FileName: LCP
 * Description: LCR 027. 回文链表
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isPalindrome(ListNode *head) {
        if (head == nullptr) return head;
        vector<int> values;
        while (head != nullptr) {
            values.push_back(head->val);
            head = head->next;
        }
        for (int i = 0, n = values.size(); i < n / 2; ++i) {
            if (values[i] != values[n - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    auto head = stringToList("[1,2,3,3,2,1]");
    auto ans = Solution().isPalindrome(head);
    cout << toString(ans) << endl;
    return 0;
}