/**
 * Author: Deean
 * Date: 2023-05-07 10:32
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *reverseEvenLengthGroups(ListNode *head) {
        vector < ListNode * > nodes;
        while (head) {
            nodes.push_back(head);
            head = head->next;
        }
        for (int i = 0, width = 0, n = nodes.size(); i < n; i += width) {
            width += 1;
            if (min(width, n - i) % 2 == 0) {
                reverse(nodes.begin() + i, nodes.begin() + min(i + width, n));
            }
        }
        for (int i = 0, n = nodes.size(); i < n - 1; ++i) {
            nodes[i]->next = nodes[i + 1];
        }
        nodes.back()->next = nullptr;
        return nodes[0];
    }
};

int main() {
    auto head = stringToList("[5,2,6,3,9,1,7,3,8,4]");
    auto ans = Solution().reverseEvenLengthGroups(head);
    cout << toString(ans) << endl;
    return 0;
}
