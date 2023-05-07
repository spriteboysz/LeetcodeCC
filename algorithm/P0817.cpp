/**
 * Author: Deean
 * Date: 2023-05-07 11:31
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int numComponents(ListNode *head, vector<int> &nums) {
        unordered_set<int> seen;
        for (auto num: nums) {
            seen.emplace(num);
        }
        int cnt = 0, flag = 0;
        while (head) {
            if (seen.count(head->val)) {
                if (!flag) {
                    flag = true;
                    cnt++;
                }
            } else {
                flag = false;
            }
            head = head->next;
        }
        return cnt;
    }
};

int main() {
    auto head = stringToList("[0,1,2,3,4]");
    vector<int> nums = {0, 3, 1, 4};
    auto ans = Solution().numComponents(head, nums);
    cout << toString(ans) << endl;
    return 0;
}
