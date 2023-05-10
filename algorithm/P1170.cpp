/**
 * Author: Deean
 * Date: 2023-05-09 22:51
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int process(string s) {
        map<char, int> map;
        for (auto c: s) {
            map[c]++;
        }
        return map.begin()->second;
    }

    vector<int> numSmallerByFrequency(vector<string> &queries, vector<string> &words) {
        vector<int> ret, queries_v, words_v;
        for (auto query: queries) {
            queries_v.push_back(process(query));
        }
        for (auto word: words) {
            words_v.push_back(process(word));
        }
        for (auto query: queries_v) {
            int cnt = 0;
            for (auto word: words_v) {
                if (query < word) {
                    cnt++;
                }
            }
            ret.push_back(cnt);
        }
        return ret;
    }
};

int main() {
    vector<string> queries = {"cbd"}, words = {"zaaaz"};
    auto ans = Solution().numSmallerByFrequency(queries, words);
    cout << toString(ans) << endl;
    return 0;
}
