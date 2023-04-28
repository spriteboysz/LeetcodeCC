/**
 * Author: Deean
 * Date: 2023-04-28 22:00
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set < ListNode * > seen;
        while (head != nullptr) {
            if (seen.count(head) > 0) {
                return true;
            }
            seen.emplace(head);
            head = head->next;
        }
        return false;
    }
};

int main() {
    ListNode *head = stringToList("[3,2,0,-4]");
    auto ans = Solution().hasCycle(head);
    cout << toString(ans) << endl;
    return 0;
}
