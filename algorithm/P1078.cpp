/**
 * Author: Deean
 * Date: 2022-09-07 00:06
 * FileName: algorithm/P1078.cpp
 * Description: 1078. Bigram 分词
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        stringstream ss(text);
        string word;
        vector<string> words;
        while (ss >> word) {
            words.push_back(word);
        }

        vector<string> vec;
        for (int i = 0; i < words.size() - 2; ++i) {
            if (words[i] == first && words[i + 1] == second) {
                vec.push_back(words[i + 2]);
            }
        }
        return vec;
    }
};

int main() {
    auto ans = Solution().findOcurrences("we will we will rock you", "we", "will");
    cout << toString(ans) << endl;
    return 0;
}