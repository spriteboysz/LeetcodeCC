/**
 * Author: Deean
 * Date: 2022-09-04 10:10
 * FileName: interview/M00020003.cpp
 * Description: 面试题 02.03. 删除中间节点
 */

#include <ListNode.h>

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
    Solution().deleteNode(stringToList("[5,1,4]"));
    return 0;
}