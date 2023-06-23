/**
 * Author: Deean
 * Date: 2023-06-23 16:00
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<bool> visited(n);
        for (int i = 0, d = k; !visited[i]; d += k) {
            visited[i] = true;
            i = (i + d) % n;
        }
        vector<int> losers;
        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                losers.push_back(i + 1);
            }
        }
        return losers;
    }
};

int main() {
    auto ans = Solution().circularGameLosers(5, 2);
    cout << toString(ans) << endl;
    return 0;
}
