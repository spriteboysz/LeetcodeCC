/**
 * Author: Deean
 * Date: 2022-09-02 00:13
 * FileName: algorithm/P1773.cpp
 * Description: 1773. 统计匹配检索规则的物品数量
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue) {
        int count = 0, v = 0;
        if (ruleKey == "color") v = 1;
        if (ruleKey == "name") v = 2;
        for (vector<string> item: items) {
            if (item[v] == ruleValue) count++;
        }
        return count;
    }
};

int main() {
    vector<vector<string>> items = {{"phone",    "blue",   "pixel"},
                                    {"computer", "silver", "lenovo"},
                                    {"phone",    "gold",   "iphone"}};
    auto ans = Solution().countMatches(items, "color", "silver");
    cout << ans << endl;
    return 0;
}