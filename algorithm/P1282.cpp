/**
 * Author: Deean
 * Date: 2023-05-13 22:23
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<int>> groupThePeople(vector<int> &groupSizes) {
        unordered_map<int, vector<int>> hash;
        for (int i = 0, n = groupSizes.size(); i < n; ++i) {
            hash[groupSizes[i]].push_back(i);
        }
        vector <vector<int>> groups;
        for (auto [k, v]: hash) {
            for (int i = 0, n = v.size() / k; i < n; ++i) {
                vector<int> group;
                for (int j = 0, start = i * k; j < k; ++j) {
                    group.push_back(v[start + j]);
                }
                groups.push_back(group);
            }
        }
        return groups;
    }
};

int main() {
    vector<int> groupSizes = {3, 3, 3, 3, 3, 1, 3};
    auto ans = Solution().groupThePeople(groupSizes);
    cout << toString(ans) << endl;
    return 0;
}
