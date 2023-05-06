/**
 * Author: Deean
 * Date: 2023-05-05 23:22
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;
typedef ListNode Node;

class Solution {
public:
    unordered_map<Node *, Node *> hash;

    Node *copyRandomList(Node *head) {
        if (head == nullptr) return head;
        if (hash.count(head)) return hash[head];
        Node *root = new Node(head->val);
        hash[head] = root;
        root->next = copyRandomList(head->next);
        root->random = copyRandomList(head->random);
        return root;
    }
};

int main() {
    ListNode *head = stringToList("[[7,null],[13,0],[11,4],[10,2],[1,0]]");
    auto ans = Solution().copyRandomList(head);
    cout << toString(ans) << endl;
    return 0;
}
