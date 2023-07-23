/**
 * Author: Deean
 * Date: 2023-07-23 14:40
 * FileName: algorithm
 * Description:451. 根据字符出现频率排序
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> map;
        for (auto &ch: s) {
            map[ch]++;
        }
        vector <pair<char, int>> vec;
        for (auto &item: map) {
            vec.emplace_back(item);
        }
        sort(vec.begin(), vec.end(), [](const pair<char, int> &a, const pair<char, int> &b) {
            return a.second > b.second;
        });
        string ss;
        for (auto &[ch, num]: vec) {
            for (int i = 0; i < num; i++) {
                ss.push_back(ch);
            }
        }
        return ss;
    }
};

int main() {
    auto ans = Solution().frequencySort("ffee");
    cout << toString(ans) << endl;
    return 0;
}
