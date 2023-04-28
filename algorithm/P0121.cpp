/**
 * Author: Deean
 * Date: 2023-04-28 22:10
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int maximum = 0, minimum = 1e9;
        for (auto price: prices) {
            maximum = max(maximum, price - minimum);
            minimum = min(minimum, price);
        }
        return maximum;
    }
};

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    auto ans = Solution().maxProfit(prices);
    cout << toString(ans) << endl;
    return 0;
}
