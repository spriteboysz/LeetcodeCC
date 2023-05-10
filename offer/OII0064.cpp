/**
 * Author: Deean
 * Date: 2023-05-09 23:06
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class MagicDictionary {
public:
    unordered_map<int, vector<string>> hash;

    MagicDictionary() {

    }

    void buildDict(vector <string> dictionary) {
        for (auto word: dictionary) {
            hash[word.size()].push_back(word);
        }
    }

    bool search(string searchWord) {
        vector <string> words = hash[searchWord.size()];
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
    vector <string> words = {"MagicDictionary", "buildDict", "search", "search", "search", "search"};
    MagicDictionary *obj = new MagicDictionary();
    obj->buildDict(words);
    cout << obj->search("hello") << endl;
    cout << obj->search("hhllo") << endl;
    return 0;
}
