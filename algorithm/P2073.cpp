/**
 * Author: Deean
 * Date: 2023-04-15 15:27
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int timeRequiredToBuy(vector<int> &tickets, int k) {
        int cnt = 0;
        for (int i = 0, n = tickets.size(); i < n; ++i) {
            if (i <= k) {
                cnt += min(tickets[i], tickets[k]);
            } else {
                cnt += min(tickets[i], tickets[k] - 1);
            }
        }
        return cnt;
    }
};

int main() {
    vector<int> tickets = {2, 3, 2};
    auto ans = Solution().timeRequiredToBuy(tickets, 2);
    cout << toString(ans) << endl;
    return 0;
}
