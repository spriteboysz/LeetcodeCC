/**
 * Author: Deean
 * Date: 2023-05-08 23:28
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<int>> findWinners(vector <vector<int>> &matches) {
        unordered_map<int, int> winners, losers;
        for (auto match: matches) {
            winners[match[0]]++;
            losers[match[1]]++;
        }
        vector<int> ans0, ans1;
        for (auto [k, v]: winners) {
            if (v > 0 && losers[k] == 0) {
                ans0.push_back(k);
            }
        }
        sort(ans0.begin(), ans0.end());
        for (auto [k, v]: losers) {
            if (v == 1) {
                ans1.push_back(k);
            }
        }
        sort(ans1.begin(), ans1.end());
        return {ans0, ans1};
    }
};

int main() {
    auto matches = stringToVector2("[[1,3],[2,3],[3,6],[5,6],[5,7],[4,5],[4,8],[4,9],[10,4],[10,9]]");
    auto ans = Solution().findWinners(matches);
    cout << toString(ans) << endl;
    return 0;
}
