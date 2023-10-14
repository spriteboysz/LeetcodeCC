/**
 * Author: Deean
 * Date: 2023-10-13 22:42
 * FileName: LCP
 * Description: LCR 123. 图书整理 I
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> reverseBookList(ListNode *head) {
        vector<int> values;
        if (!head) return values;
        while (head) {
            values.push_back(head->val);
            head = head->next;
        }
        std::reverse(values.begin(), values.end());
        return values;
    }
};

int main() {
    ListNode *head = stringToList("[3,6,4,1]");
    auto ans = Solution().reverseBookList(head);
    cout << toString(ans) << endl;
    return 0;
}