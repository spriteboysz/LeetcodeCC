/**
 * Author: Deean
 * Date: 2023-10-12 23:45
 * FileName: LCP
 * Description: LCR 063. 单词替换
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    static bool cmp(const string &a, const string &b) {
        return a.length() < b.length();
    }

    vector <string> split(string ss, char delim) {
        vector <string> words;
        int start = 0;
        for (int j = 0, n = ss.length(); j < n; j++) {
            if (ss[j] == delim) {
                words.push_back(ss.substr(start, j - start));
                start = j + 1;
            }
        }
        words.push_back(ss.substr(start));
        return words;
    }

    string replaceWords(vector <string> &dictionary, string sentence) {
        std::sort(dictionary.begin(), dictionary.end(), cmp);
        unordered_map <string, string> map;
        vector <string> words = split(sentence, ' ');
        for (int i = 0, n = words.size(); i < n; ++i) {
            string word = words[i];
            if (map.count(word) > 0) {
                words[i] = map[word];
            } else {
                for (const auto &root: dictionary) {
                    if (word.find(root) == 0) {
                        words[i] = root;
                        map[word] = root;
                        break;
                    }
                }
            }
        }
        string ss = "";
        for (const auto &word: words) {
            ss += word + " ";
        }
        return ss.substr(0, ss.length() - 1);
    }
};

int main() {
    vector <string> dictionary = {"catt", "cat", "bat", "rat"};
    auto ans = Solution().replaceWords(dictionary, "the cattle was rattled by the battery");
    cout << toString(ans) << endl;
    return 0;
}