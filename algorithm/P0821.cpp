/**
 * Author: Deean
 * Date: 2023-04-22 19:05
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> shortest(n);
        for (int i = 0, index = -n; i < n; ++i) {
            if (s[i] == c) {
                index = i;
            }
            shortest[i] = i - index;
        }
        for (int i = n - 1, index = 2 * n; i >= 0; --i) {
            if (s[i] == c) {
                index = i;
            }
            shortest[i] = min(shortest[i], index - i);
        }
        return shortest;
    }
};

int main() {
    auto ans = Solution().shortestToChar("loveleetcode", 'e');
    cout << toString(ans) << endl;
    return 0;
}
