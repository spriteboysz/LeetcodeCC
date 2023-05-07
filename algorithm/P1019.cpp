/**
 * Author: Deean
 * Date: 2023-05-07 11:17
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> nextLargerNodes(ListNode *head) {
        vector<int> nextLarger;
        stack <pair<int, int>> stack;
        int index = -1;
        while (head) {
            index++;
            nextLarger.push_back(0);
            while (!stack.empty() && stack.top().first < head->val) {
                nextLarger[stack.top().second] = head->val;
                stack.pop();
            }
            cout << toString(nextLarger) << endl;
            stack.emplace(head->val, index);
            head = head->next;
        }
        return nextLarger;
    }
};

int main() {
    auto head = stringToList("[2,7,4,3,5]");
    auto ans = Solution().nextLargerNodes(head);
    cout << toString(ans) << endl;
    return 0;
}
