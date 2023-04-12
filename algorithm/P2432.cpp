/**
 * Author: Deean
 * Date: 2023-04-12 22:30
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int hardestWorker(int n, vector <vector<int>> &logs) {
        if (n < logs[0][0]) return -1;
        int minimum = logs[0][0], k = logs[0][1];
        for (int i = 1; i < logs.size(); ++i) {
            int cur = logs[i][1] - logs[i - 1][1];
            if (cur > k) {
                k = cur;
                minimum = logs[i][0];
            } else if (cur == k) {
                minimum = min(minimum, logs[i][0]);
            }
        }
        return minimum;
    }
};

int main() {
    vector <vector<int>> logs = stringToVector2("[[0,3],[2,5],[0,9],[1,15]]");
    auto ans = Solution().hardestWorker(10, logs);
    cout << toString(ans) << endl;
    return 0;
}
