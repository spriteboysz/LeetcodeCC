/**
 * Author: Deean
 * Date: 2023-04-22 17:12
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<int>> largeGroupPositions(string s) {
        vector <vector<int>> group;
        for (int i = 0, n = s.size(), cnt = 1; i < n; ++i) {
            if (i == n - 1 || s[i] != s[i + 1]) {
                if (cnt >= 3) {
                    group.push_back({i - cnt + 1, i});
                }
                cnt = 1;
            } else {
                cnt++;
            }
        }
        return group;
    }
};

int main() {
    auto ans = Solution().largeGroupPositions("abcdddeeeeaabbbcd");
    cout << toString(ans) << endl;
    return 0;
}
