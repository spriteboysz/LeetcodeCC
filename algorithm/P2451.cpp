/**
 * Author: Deean
 * Date: 2023-04-11 23:53
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string oddString(vector <string> &words) {
        unordered_map<string, vector<string>> hash;
        for (const auto &word: words) {
            string ss = "#";
            for (int i = 1, n = word.length(); i < n; ++i) {
                ss.append(to_string(word[i] - word[i - 1]));
                ss.append("#");
            }
            hash[ss].push_back(word);
        }
        for (auto [k, v]: hash) {
            if (v.size() == 1) {
                return v[0];
            }
        }
        return "";
    }
};

int main() {
    vector <string> words = {"adc", "wzy", "abc"};
    auto ans = Solution().oddString(words);
    cout << toString(ans) << endl;
    return 0;
}
