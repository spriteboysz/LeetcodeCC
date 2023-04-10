/**
 * Author: Deean
 * Date: 2023-04-09 23:14
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    long long pickGifts(vector<int> &gifts, int k) {
        int n = gifts.size();
        while (k-- > 0) {
            int maximum = gifts[0];
            for (int i = 1; i < n; ++i) {
                maximum = max(maximum, gifts[i]);
            }
            for (int i = 0; i < n; ++i) {
                if (gifts[i] == maximum) {
                    gifts[i] = (int) sqrt(gifts[i]);
                    break;
                }
            }
        }
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += gifts[i];
        }
        return sum;
    }
};

int main() {
    vector<int> gifts = {25, 64, 9, 4, 100, 1};
    auto ans = Solution().pickGifts(gifts, 4);
    cout << toString(ans) << endl;
    return 0;
}
