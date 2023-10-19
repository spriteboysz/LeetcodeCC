/**
 * Author: Deean
 * Date: 2022-09-04 13:55
 * FileName: algorithm/P1290.cpp
 * Description: 1290. 二进制链表转整数
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int getDecimalValue(ListNode *head) {
        int value = 0;
        while (head) {
            value = value * 2 + head->val;
            head = head->next;
        }
        return value;
    }
};

int main() {
    auto ans = Solution().getDecimalValue(stringToList("[1,0,0,1,0,0,1,1,1,0,0,0,0,0,0]"));
    cout << ans << endl;
    return 0;
}