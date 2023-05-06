/**
 * Author: Deean
 * Date: 2023-05-05 23:31
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> values;

    Solution(ListNode *head) {
        while (head != nullptr) {
            values.emplace_back(head->val);
            head = head->next;
        }
    }

    int getRandom() {
        return values[rand() % values.size()];
    }
};

int main() {
    ListNode *head = stringToList("[1, 2, 3]");
    Solution *obj = new Solution(head);
    cout << obj->getRandom() << endl;
    cout << obj->getRandom() << endl;
    cout << obj->getRandom() << endl;
    return 0;
}
