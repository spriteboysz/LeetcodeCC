/**
 * Author: Deean
 * Date: 2023-04-16 23:26
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string reorderSpaces(string text) {
        vector <string> words;
        stringstream in(text);
        string word, ss;
        int cnt = 0;
        while (in >> word) {
            words.push_back(word);
            cnt += word.size();
        }
        if (words.size() == 1) {
            ss = words[0];
        } else {
            string space((text.size() - cnt) / (words.size() - 1), ' ');
            for (int i = 0; i < words.size() - 1; ++i) {
                ss += words[i] + space;
            }
            ss += words.back();
        }
        return ss + string(text.size() - ss.size(), ' ');
    }
};

int main() {
    auto ans = Solution().reorderSpaces("  this   is  a sentence ");
    cout << toString(ans) << endl;
    return 0;
}
