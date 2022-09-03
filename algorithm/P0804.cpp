/**
 * Author: Deean
 * Date: 2022-09-03 10:47
 * FileName: algorithm/P0804.cpp
 * Description: 804. 唯一摩尔斯密码词
 */

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

const static string alphabet[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..",
                                  "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-",
                                  "-.--", "--.."};

class Solution {
public:
    int uniqueMorseRepresentations(vector<string> &words) {
        unordered_set<string> morse;
        for (string word: words) {
            string cur = "";
            for (char c: word) {
                cur += alphabet[c - 'a'];
            }
            morse.emplace(cur);
        }
        return morse.size();
    }
};

int main() {
    vector<string> words = {"gin", "zen", "gig", "msg"};
    auto ans = Solution().uniqueMorseRepresentations(words);
    cout << ans << endl;
    return 0;
}