/**
 * Author: Deean
 * Date: 2023-04-29 12:12
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> reversePrint(ListNode *head) {
        vector<int> value;
        while (head != nullptr) {
            value.insert(value.begin(), head->val);
            head = head->next;
        }
        return value;
    }
};

int main() {
    ListNode *head = stringToList("[1,3,2]");
    auto ans = Solution().reversePrint(head);
    cout << toString(ans) << endl;
    return 0;
}
