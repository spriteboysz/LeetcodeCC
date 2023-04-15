/**
 * Author: Deean
 * Date: 2023-04-15 11:53
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool static cmp(const int &a, const int &b) {
        return a > b;
    }

    int minimumCost(vector<int> &cost) {
        sort(cost.begin(), cost.end(), cmp);
        int sum = 0;
        for (int i = 0, n = cost.size(); i < n; i++) {
            if (i % 3 != 2) {
                sum += cost[i];
            }
        }
        return sum;
    }
};

int main() {
    vector<int> cost = {6, 5, 7, 9, 2, 2};
    auto ans = Solution().minimumCost(cost);
    cout << toString(ans) << endl;
    return 0;
}
