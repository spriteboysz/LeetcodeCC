/**
 * Author: Deean
 * Date: 2023-05-10 22:13
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maxCoins(vector<int> &piles) {
        sort(piles.rbegin(), piles.rend());
        int cnt = 0;
        for (int i = 0, n = piles.size(); i < n / 3; ++i) {
            cnt += piles[i * 2 + 1];
        }
        return cnt;
    }
};

int main() {
    vector<int> piles = {2, 4, 1, 2, 7, 8};
    auto ans = Solution().maxCoins(piles);
    cout << toString(ans) << endl;
    return 0;
}
