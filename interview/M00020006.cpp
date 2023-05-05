/**
 * Author: Deean
 * Date: 2023-04-30 17:20
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isPalindrome(ListNode *head) {
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
    ListNode *head = stringToList("[1,2,2,1]");
    auto ans = Solution().isPalindrome(head);
    cout << toString(ans) << endl;
    return 0;
}
