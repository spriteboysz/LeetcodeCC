/**
 * Author: Deean
 * Date: 2023-04-17 23:05
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    char slowestKey(vector<int> &releaseTimes, string keysPressed) {
        int maximum = -1, last = 0;
        char key = keysPressed[0];
        for (int i = 0, n = releaseTimes.size(); i < n; ++i) {
            if (releaseTimes[i] - last > maximum || releaseTimes[i] - last == maximum && keysPressed[i] > key) {
                maximum = releaseTimes[i] - last;
                key = keysPressed[i];
            }
            last = releaseTimes[i];
        }
        return key;
    }
};

int main() {
    vector<int> releaseTimes = {9, 29, 49, 50};
    auto ans = Solution().slowestKey(releaseTimes, "cbcd");
    cout << toString(ans) << endl;
    return 0;
}
