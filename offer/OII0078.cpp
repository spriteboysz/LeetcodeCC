/**
 * Author: Deean
 * Date: 2023-05-11 23:25
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        if (lists.empty()) return nullptr;
        vector < ListNode * > merged;
        for (auto list: lists) {
            while (list) {
                merged.push_back(list);
                list = list->next;
            }
        }
        if (merged.empty()) return nullptr;
        sort(merged.begin(), merged.end(), [&](ListNode *n1, ListNode *n2) {
            return n1->val < n2->val;
        });
        for (int i = 0, n = merged.size(); i < n - 1; ++i) {
            merged[i]->next = merged[i + 1];
        }
        merged.back()->next = nullptr;
        return merged.front();
    }
};

int main() {
    auto list1 = stringToList("[1,4,5]");
    auto list2 = stringToList("[1,3,4]");
    auto list3 = stringToList("[2,6]");
    vector < ListNode * > lists = {list1, list2, list3};
    auto ans = Solution().mergeKLists(lists);
    cout << toString(ans) << endl;
    return 0;
}
