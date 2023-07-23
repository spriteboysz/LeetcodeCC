/**
 * Author: Deean
 * Date: 2023-07-23 11:38
 * FileName: algorithm
 * Description:648. 单词替换
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
private:
    bool check(string &root, string &word) {
        for (int i = 0; i < root.size(); ++i) {
            if (root[i] != word[i]) {
                return false;
            }
        }
        return true;
    }

public:
    string replaceWords(vector <string> &dictionary, string sentence) {
        sort(dictionary.begin(), dictionary.end(), [](auto &s1, auto &s2) -> bool {
            return s1.size() < s2.size();
        });
        string ss, word;
        stringstream words(sentence);
        while (words >> word) {
            for (auto &root: dictionary) {
                if (check(root, word)) {
                    word = root;
                    break;
                }
            }
            ss += word + " ";
        }
        ss.pop_back();
        return ss;
    }
};

int main() {
    vector <string> dictionary = {"cat", "bat", "rat"};
    auto ans = Solution().replaceWords(dictionary, "the cattle was rattled by the battery");
    cout << toString(ans) << endl;
    return 0;
}
