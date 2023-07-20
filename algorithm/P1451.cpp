/**
 * Author: Deean
 * Date: 2023-07-20 23:08
 * FileName: algorithm
 * Description:1451. 重新排列句子中的单词
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string arrangeWords(string text) {
        stringstream ss(text);
        string word;
        vector <string> words;
        for (int i = 0; getline(ss, word, ' '); ++i) {
            word[0] = tolower(word[0]);
            words.push_back(word);
        }
        stable_sort(words.begin(), words.end(), [](string s1, string s2) {
            return s1.size() < s2.size();
        });
        words[0][0] = toupper(words[0][0]);
        ss.clear();
        ss << words[0];
        for (int i = 1; i < words.size(); ++i) {
            ss << " " << words[i];
        }
        return ss.str();
    }
};

int main() {
    auto ans = Solution().arrangeWords("Keep calm and code on");
    cout << toString(ans) << endl;
    return 0;
}
