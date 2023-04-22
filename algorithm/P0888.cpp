/**
 * Author: Deean
 * Date: 2023-04-22 15:53
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> fairCandySwap(vector<int> &aliceSizes, vector<int> &bobSizes) {
        int sum1 = 0, sum2 = 0;
        for (auto num: aliceSizes) {
            sum1 += num;
        }
        for (auto num: bobSizes) {
            sum2 += num;
        }
        int delta = (sum1 - sum2) / 2;
        unordered_set<int> rec(aliceSizes.begin(), aliceSizes.end());
        vector<int> swap;
        for (auto y: bobSizes) {
            int x = y + delta;
            if (rec.count(x)) {
                swap = vector < int > {x, y};
                break;
            }
        }
        return swap;
    }
};

int main() {
    vector<int> aliceSize = {1, 1}, bobSize = {2, 2};
    auto ans = Solution().fairCandySwap(aliceSize, bobSize);
    cout << toString(ans) << endl;
    return 0;
}
