/**
 * Author: Deean
 * Date: 2023-04-22 20:00
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector <string> &words) {
        vector<int> hash(26, 0);
        for (auto c: licensePlate) {
            if (isalpha(c)) {
                hash[tolower(c) - 'a']++;
            }
        }
        unordered_map<string, int> map;
        for (int i = 0; i < words.size(); ++i) {
            map[words[i]] = i;
        }
        sort(words.begin(), words.end(), [&](string a, string b) {
            return a.size() == b.size() ? map[a] < map[b] : a.size() < b.size();
        });
        for (auto word: words) {
            vector<int> hash1(26, 0);
            for (auto c: word) {
                hash1[c - 'a']++;
            }
            bool flag = true;
            for (int i = 0; i < 26; ++i) {
                if (hash[i] > hash1[i]) {
                    flag = false;
                    break;
                }
            }
            if (flag) return word;
        }
        return "";
    }
};

int main() {
    vector <string> words = {"step", "abcd", "steps", "stripe", "stepple"};
    auto ans = Solution().shortestCompletingWord("1s3 PSt", words);
    cout << toString(ans) << endl;
    return 0;
}
