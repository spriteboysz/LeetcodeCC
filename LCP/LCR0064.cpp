/**
 * Author: Deean
 * Date: 2023-10-13 21:38
 * FileName: LCP
 * Description: LCR 064. 实现一个魔法字典
 */

#include "..\common\leetcode.h"

using namespace std;

class MagicDictionary {
public:
    /** Initialize your data structure here. */
    unordered_map<int, vector<string>> hash;

    MagicDictionary() {

    }

    void buildDict(vector<string> dictionary) {
        for (auto word: dictionary) {
            hash[word.size()].push_back(word);
        }
    }

    bool search(string searchWord) {
        vector<string> words = hash[searchWord.size()];
        for (auto word: words) {
            int cnt = 0;
            for (int i = 0, n = searchWord.size(); i < n; ++i) {
                if (word[i] != searchWord[i]) {
                    cnt++;
                }
                if (cnt > 1) break;
                if (i == n - 1 && cnt == 1) return true;
            }
        }
        return false;
    }
};

int main() {
    MagicDictionary *obj = new MagicDictionary();
    vector<string> dictionary = {"hello", "leetcode"};
    obj->buildDict(dictionary);
    cout << obj->search("hello") << endl;
    cout << obj->search("hell") << endl;
    cout << obj->search("leetcode") << endl;
}