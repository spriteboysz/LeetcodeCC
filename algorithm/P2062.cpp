/**
 * Author: Deean
 * Date: 2023-04-15 15:34
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int countVowelSubstrings(string word) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int cnt = 0;
        for (int i = 0, n = word.size(); i < n; ++i) {
            unordered_set<char> charset;
            for (int j = i; j < n; ++j) {
                charset.insert(word[j]);
                if (charset == vowels) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().countVowelSubstrings("cuaieuouac");
    cout << toString(ans) << endl;
    return 0;
}
