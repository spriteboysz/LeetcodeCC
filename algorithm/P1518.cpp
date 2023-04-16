/**
 * Author: Deean
 * Date: 2023-04-16 22:25
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int bottle = numBottles, cnt = numBottles;
        while (bottle >= numExchange) {
            bottle -= numExchange;
            cnt++;
            bottle++;
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().numWaterBottles(9, 3);
    cout << toString(ans) << endl;
    return 0;
}
