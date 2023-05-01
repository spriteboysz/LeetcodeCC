/**
 * Author: Deean
 * Date: 2023-05-01 17:43
 * FileName: LCP
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minimumSwitchingTimes(vector <vector<int>> &source, vector <vector<int>> &target) {
        unordered_map<int, int> hash;
        for (auto row: source) {
            for (auto color: row) {
                hash[color]++;
            }
        }
        for (auto row: target) {
            for (auto color: row) {
                hash[color]--;
            }
        }
        int sum = 0;
        for (auto [k, v]: hash) {
            sum += abs(v);
        }
        return sum / 2;
    }
};

int main() {
    auto src = stringToVector2("[[1,3],[5,4]]");
    auto dst = stringToVector2("[[3,1],[6,5]]");
    auto ans = Solution().minimumSwitchingTimes(src, dst);
    cout << toString(ans) << endl;
    return 0;
}
