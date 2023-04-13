/**
 * Author: Deean
 * Date: 2023-04-13 23:39
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string process(string word) {
        int hash[26] = {0};
        for (const auto &c: word) {
            hash[c - 'a']++;
        }
        string key = "#";
        for (int i = 0; i < 26; ++i) {
            key.append(to_string(hash[i])).append("#");
        }
        return key;
    }

    vector<string> removeAnagrams(vector<string> &words) {
        vector<string> stack;
        string key = process(words[0]);
        stack.push_back(words[0]);
        for (int i = 1, n = words.size(); i < n; ++i) {
            string cur = process(words[i]);
            if (key.compare(cur) != 0) {
                stack.push_back(words[i]);
                key = cur;
            }
        }
        return stack;
    }
};

int main() {
    vector<string> words = {"abba", "baba", "bbaa", "cd", "cd"};
    auto ans = Solution().removeAnagrams(words);
    cout << toString(ans) << endl;
    return 0;
}
