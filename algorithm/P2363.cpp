/**
 * Author: Deean
 * Date: 2022-09-09 22:41
 * FileName: algorithm/P2363.cpp
 * Description: 2363. 合并相似的物品
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>> &items1, vector<vector<int>> &items2) {
        map<int, int> map;
        for (auto &item: items1) map[item[0]] += item[1];
        for (auto &item: items2) map[item[0]] += item[1];
        vector<vector<int>> vec;
        for (auto &pair: map) {
            vec.push_back({pair.first, pair.second});
        }
        return vec;
    }
};

int main() {
    vector<vector<int>> items1 = {{1, 3},
                                  {2, 2}}, items2 = {{7, 1},
                                                     {2, 2},
                                                     {1, 4}};
    auto ans = Solution().mergeSimilarItems(items2, items1);
    cout << toString(ans) << endl;
    return 0;
}