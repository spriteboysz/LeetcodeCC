/**
 * Author: Deean
 * Date: 2023-04-12 23:36
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool checkDistances(string s, vector<int> &distance) {
        int hash[26] = {0};
        for (int i = 0; i < 26; ++i) {
            hash[i] = -1;
        }
        for (int i = 0, n = s.size(); i < n; ++i) {
            if (hash[s[i] - 'a'] == -1) {
                hash[s[i] - 'a'] = i;
            } else {
                hash[s[i] - 'a'] = i - hash[s[i] - 'a'] - 1;
            }
        }
        for (int i = 0; i < 26; ++i) {
            if (hash[i] != -1 && hash[i] != distance[i]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    vector<int> distance = {1, 3, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    auto ans = Solution().checkDistances("abaccb", distance);
    cout << toString(ans) << endl;
    return 0;
}
