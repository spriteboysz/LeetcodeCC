/**
 * Author: Deean
 * Date: 2023-05-07 11:44
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<ListNode *> splitListToParts(ListNode *head, int k) {
        auto cur = head;
        int n = 0;
        while (cur) {
            n += 1;
            cur = cur->next;
        }
        int div = n / k, mod = n % k;
        vector < ListNode * > parts(k, nullptr);
        cur = head;
        for (int i = 0; i < k && cur != nullptr; ++i) {
            parts[i] = cur;
            for (int j = 1; j < div + (i < mod ? 1 : 0); ++j) {
                cur = cur->next;
            }
            auto next = cur->next;
            cur->next = nullptr;
            cur = next;
        }
        return parts;
    }
};

int main() {
    auto head = stringToList("[1,2,3,4,5,6,7,8,9,10]");
    auto ans = Solution().splitListToParts(head, 3);
    cout << toString(ans) << endl;
    return 0;
}
