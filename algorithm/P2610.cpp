/**
 * Author: Deean
 * Date: 2023-05-13 22:31
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<int>> findMatrix(vector<int> &nums) {
        unordered_map<int, int> hash;
        for (auto num: nums) {
            hash[num]++;
        }
        int maximum = 0;
        for (auto [k, v]: hash) {
            maximum = max(maximum, v);
        }
        vector <vector<int>> groups(maximum);
        for (auto [k, v]: hash) {
            for (int i = 0; i < v; ++i) {
                groups[i].push_back(k);
            }
        }
        return groups;
    }
};

int main() {
    vector<int> nums = {1, 3, 4, 1, 2, 3, 1};
    auto ans = Solution().findMatrix(nums);
    cout << toString(ans) << endl;
    return 0;
}
