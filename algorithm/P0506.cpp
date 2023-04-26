/**
 * Author: Deean
 * Date: 2023-04-25 22:52
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int> &score) {
        vector<int> org = score;
        sort(score.rbegin(), score.rend());
        unordered_map<int, string> order;
        for (int i = 0; i < score.size(); ++i) {
            if (i >= 3) order[score[i]] = to_string(i + 1);
            if (i == 0) order[score[i]] = "Gold Medal";
            if (i == 1) order[score[i]] = "Silver Medal";
            if (i == 2) order[score[i]] = "Bronze Medal";
        }
        vector<string> res(score.size(), "");
        for (int i = 0; i < res.size(); i++) {
            res[i] = order[org[i]];
        }
        return res;
    }
};

int main() {
    vector<int> score = {10, 3, 8, 9, 4};
    auto ans = Solution().findRelativeRanks(score);
    cout << toString(ans) << endl;
    return 0;
}
