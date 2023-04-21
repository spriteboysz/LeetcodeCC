/**
 * Author: Deean
 * Date: 2023-04-21 21:27
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int numEquivDominoPairs(vector <vector<int>> &dominoes) {
        vector<int> hash(100);
        int cnt = 0;
        for (auto domino: dominoes) {
            int num = min(domino[0], domino[1]) * 10 + max(domino[0], domino[1]);
            cnt += hash[num];
            hash[num]++;
        }
        return cnt;
    }
};

int main() {
    vector <vector<int>> dominoes = stringToVector2("[[1,2],[2,1],[3,4],[5,6]]");
    auto ans = Solution().numEquivDominoPairs(dominoes);
    cout << toString(ans) << endl;
    return 0;
}
