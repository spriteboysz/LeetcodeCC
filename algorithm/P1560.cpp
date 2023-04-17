/**
 * Author: Deean
 * Date: 2023-04-16 23:00
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> mostVisited(int n, vector<int> &rounds) {
        vector<int> visited;
        int size = rounds.size(), start = rounds[0], end = rounds[size - 1];
        if (start <= end) {
            for (int i = start; i <= end; ++i) {
                visited.push_back(i);
            }
        } else {
            for (int i = 1; i <= end; ++i) {
                visited.push_back(i);
            }
            for (int i = start; i <= n; ++i) {
                visited.push_back(i);
            }
        }
        return visited;
    }
};

int main() {
    vector<int> rounds = {1, 3, 1, 2};
    auto ans = Solution().mostVisited(2, rounds);
    cout << toString(ans) << endl;
    return 0;
}
