/**
 * Author: Deean
 * Date: 2023-04-29 19:36
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        return (arrivalTime + delayedTime) % 24;
    }
};

int main() {
    auto ans = Solution().findDelayedArrivalTime(13, 11);
    cout << toString(ans) << endl;
    return 0;
}
