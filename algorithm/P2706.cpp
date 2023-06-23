/**
 * Author: Deean
 * Date: 2023-06-23 15:38
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int buyChoco(vector<int> &prices, int money) {
        int min1 = 102, min2 = 101;
        for (auto price: prices) {
            if (price < min1) {
                min2 = min1;
                min1 = price;
            }else if (price < min2) {
                min2 = price;
            }
        }
        // cout << min1 << min2 << endl;
        return (min1 + min2 <= money) ? money - min1 - min2 : money;
    }
};

int main() {
    auto prices = stringToVector("[1,2,2]");
    auto ans = Solution().buyChoco(prices, 3);
    cout << toString(ans) << endl;
    return 0;
}
