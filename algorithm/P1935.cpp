/**
 * Author: Deean
 * Date: 2023-04-15 20:01
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> broken;
        for (char c: brokenLetters) {
            broken.insert(c);
        }
        int cnt = 0;
        for (int i = 0, n = text.size(), flag = 1; i <= n; ++i) {
            char c = text[i];
            if (c == ' ' || c == '\0') {
                if (flag) cnt++;
                flag = true;
            } else {
                if (broken.count(c)) {
                    flag = false;
                }
            }
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().canBeTypedWords("hello world", "ad");
    cout << toString(ans) << endl;
    return 0;
}
