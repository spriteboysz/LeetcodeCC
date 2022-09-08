/**
 * Author: Deean
 * Date: 2022-09-08 22:55
 * FileName: algorithm/P1672.cpp
 * Description: 1672. 最富有客户的资产总量
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>> &accounts) {
        int maximum = 0;
        for (auto account: accounts) {
            int cur = 0;
            for (auto num: account) {
                cur += num;
            }
            maximum = max(maximum, cur);
        }
        return maximum;
    }
};

int main() {
    vector<vector<int>> accounts = {{2, 8, 7},
                                    {7, 1, 3},
                                    {1, 9, 5}};
    auto ans = Solution().maximumWealth(accounts);
    cout << toString(ans) << endl;
    return 0;
}