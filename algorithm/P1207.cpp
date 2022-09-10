/**
 * Author: Deean
 * Date: 2022-09-10 13:54
 * FileName: algorithm/P1207.cpp
 * Description: 1207. 独一无二的出现次数
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int> &arr) {
        unordered_map<int, int> map;
        for (auto num: arr) map[num]++;

        unordered_set<int> set;
        for (auto pair: map) {
            set.insert(pair.second);
        }
        return set.size() == map.size();
    }
};

int main() {
    vector<int> arr = stringToVector("[-3,0,1,-3,1,1,1,-3,10,0]");
    auto ans = Solution().uniqueOccurrences(arr);
    cout << toString(ans) << endl;
    return 0;
}