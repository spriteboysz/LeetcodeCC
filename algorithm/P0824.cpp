/**
 * Author: Deean
 * Date: 2023-04-22 18:56
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string toGoatLatin(string sentence) {
        unordered_set<char> vowel = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int n = sentence.size(), i = 0, cnt = 1;
        string ss;
        while (i < n) {
            int j = i;
            while (j < n && sentence[j] != ' ') {
                j++;
            }
            cnt++;
            if (cnt != 2) {
                ss += ' ';
            }
            if (vowel.count(sentence[i])) {
                ss += sentence.substr(i, j - i) + 'm' + string(cnt, 'a');
            } else {
                ss += sentence.substr(i + 1, j - i - 1) + sentence[i] + 'm' + string(cnt, 'a');
            }
            i = j + 1;
        }
        return ss;
    }
};

int main() {
    auto ans = Solution().toGoatLatin("I speak Goat Latin");
    cout << toString(ans) << endl;
    return 0;
}
