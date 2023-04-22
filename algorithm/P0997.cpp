/**
 * Author: Deean
 * Date: 2023-04-22 14:24
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findJudge(int n, vector <vector<int>> &trust) {
        vector<int> in(n + 1), out(n + 1);
        for (auto &edge: trust) {
            in[edge[1]]++;
            out[edge[0]]++;
        }
        for (int i = 1; i <= n; ++i) {
            if (in[i] == n - 1 && out[i] == 0) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    vector <vector<int>> trust = stringToVector2("[[1,2]]");
    auto ans = Solution().findJudge(2, trust);
    cout << toString(ans) << endl;
    return 0;
}
