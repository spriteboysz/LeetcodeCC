/**
 * Author: Deean
 * Date: 2023-04-17 23:57
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int> &prices) {
        for (int i = 0, n = prices.size(); i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (prices[i] >= prices[j]) {
                    prices[i] -= prices[j];
                    break;
                }
            }
        }
        return prices;
    }
};

int main() {
    vector<int> prices = {8, 4, 6, 2, 3};
    auto ans = Solution().finalPrices(prices);
    cout << toString(ans) << endl;
    return 0;
}
