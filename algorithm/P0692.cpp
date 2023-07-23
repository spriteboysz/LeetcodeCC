/**
 * Author: Deean
 * Date: 2023-07-23 11:22
 * FileName: algorithm
 * Description:692. 前K个高频单词
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <string> topKFrequent(vector <string> &words, int k) {
        unordered_map<string, int> map;
        for (auto word: words) {
            map[word] += 1;
        }
        vector <string> rec;
        for (auto &[key, v]: map) {
            rec.push_back(key);
        }
        sort(rec.begin(), rec.end(), [&](string s1, string s2) -> bool {
            return map[s1] == map[s2] ? s1 < s2 : map[s1] > map[s2];
        });
        rec.resize(k);
        return rec;
    }
};

int main() {
    vector <string> words = {"i", "love", "leetcode", "i", "love", "coding"};
    auto ans = Solution().topKFrequent(words, 2);
    cout << toString(ans) << endl;
    return 0;
}
