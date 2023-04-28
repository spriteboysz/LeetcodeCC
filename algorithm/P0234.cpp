/**
 * Author: Deean
 * Date: 2023-04-27 23:42
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isPalindrome(ListNode *head) {
        vector<int> value;
        while (head != nullptr) {
            value.push_back(head->val);
            head = head->next;
        }
        for (int i = 0, n = value.size(); i < n / 2; ++i) {
            if (value[i] != value[n - i - 1]) {
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
