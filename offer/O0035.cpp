/**
 * Author: Deean
 * Date: 2023-05-14 11:50
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;
typedef ListNode Node;

class Solution {
private:
    unordered_map<Node *, Node *> map;

public:
    Node *copyRandomList(Node *head) {
        if (head == nullptr) return head;
        if (!map.count(head)) {
            Node *head_new = new Node(head->val);
            map[head] = head_new;
            head_new->next = copyRandomList(head->next);
            head_new->random = copyRandomList(head->random);
        }
        return map[head];
    }
};

int main() {
    auto head = stringToList("[[7,null],[13,0],[11,4],[10,2],[1,0]]");
    auto ans = Solution().copyRandomList(head);
    cout << toString(ans) << endl;
    return 0;
}
