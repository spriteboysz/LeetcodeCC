/**
 * Author: Deean
 * Date: 2022-09-04 10:16
 * FileName: algorithm/P0237.cpp
 * Description: 237. 删除链表中的节点
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    void deleteNode(ListNode *node) {
        node->val = node->next->val;
        node->next = node->next->next;
        cout << listToString(node) << endl;
    }
};

int main() {
    Solution().deleteNode(stringToList("[5,1,4,9]"));
    return 0;
}