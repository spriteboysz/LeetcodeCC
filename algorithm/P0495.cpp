/**
 * Author: Deean
 * Date: 2023-04-25 23:21
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int cnt = 0, expired = 0;
        for (int i = 0; i < timeSeries.size(); ++i) {
            if (timeSeries[i] >= expired) {
                cnt += duration;
            } else {
                cnt += timeSeries[i] + duration - expired;
            }
            expired = timeSeries[i] + duration;
        }
        return cnt;
    }
};

int main() {
    vector<int> timeSeries = {1,4};
    auto ans = Solution().findPoisonedDuration(timeSeries, 2);
    cout << toString(ans) << endl;
    return 0;
}
