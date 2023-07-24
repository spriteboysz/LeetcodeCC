/**
 * Author: Deean
 * Date: 2023-07-23 23:10
 * FileName: algorithm
 * Description:82. 删除排序链表中的重复元素 II
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        if (!head) return nullptr;
        unordered_map<int, int> map;
        vector < ListNode * > nodes;
        while (head) {
            nodes.push_back(head);
            map[head->val]++;
            head = head->next;
        }

        vector < ListNode * > nodes2;
        for (int i = 0, n = nodes.size(); i < n; ++i) {
            if (map[nodes[i]->val] == 1) {
                nodes2.push_back(nodes[i]);
            }
        }
        if (nodes2.size() == 0) return nullptr;
        for (int i = 1, n = nodes2.size(); i < n; ++i) {
            nodes2[i - 1]->next = nodes2[i];
        }
        nodes2.back()->next = nullptr;
        return nodes2.front();
    }
};

int main() {
    auto head = stringToList("[1,2,3,3,4,4,5]");
    auto ans = Solution().deleteDuplicates(head);
    cout << toString(ans) << endl;
    return 0;
}
