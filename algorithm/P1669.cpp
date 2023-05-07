/**
 * Author: Deean
 * Date: 2023-05-07 11:06
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2) {
        auto cur1 = list1;
        for (int i = 0; i < a - 1; ++i) {
            cur1 = cur1->next;
        }
        auto cur2 = cur1;
        for (int i = 0; i < b - a + 2; ++i) {
            cur2 = cur2->next;
        }
        cur1->next = list2;
        while (list2->next) {
            list2 = list2->next;
        }
        list2->next = cur2;
        return list1;
    }
};

int main() {
    auto list1 = stringToList("[0,1,2,3,4,5]");
    auto list2 = stringToList("[1000000,1000001,1000002]");
    auto ans = Solution().mergeInBetween(list1, 3, 4, list2);
    cout << toString(ans) << endl;
    return 0;
}
