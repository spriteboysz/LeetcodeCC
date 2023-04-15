/**
 * Author: Deean
 * Date: 2023-04-15 19:25
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isPrefixString(string s, vector <string> &words) {
        string ss = "";
        for (const auto &word: words) {
            ss.append(word);
            if (ss == s) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    vector <string> words = {"i", "love", "leetcode", "apples"};
    auto ans = Solution().isPrefixString("iloveleetcode", words);
    cout << toString(ans) << endl;
    return 0;
}
