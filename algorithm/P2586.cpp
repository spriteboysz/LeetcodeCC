/**
 * Author: Deean
 * Date: 2023-04-09 20:33
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int vowelStrings(vector <string> &words, int left, int right) {
        string vowel = "aeiou";
        int cnt = 0;
        for (int i = left; i <= right; ++i) {
            if (vowel.find(words[i][0]) != -1 && vowel.find(words[i][words[i].length() - 1]) != -1) {
                cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    vector <string> words = {"are", "amy", "u"};
    auto ans = Solution().vowelStrings(words, 0, 2);
    cout << toString(ans) << endl;
    return 0;
}
