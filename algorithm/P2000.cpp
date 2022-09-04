/**
 * Author: Deean
 * Date: 2022-09-04 15:42
 * FileName: algorithm/P2000.cpp
 * Description: 2000. 反转单词前缀
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index = -1;
        for (int i = 0; i < word.size(); ++i) {
            if (word[i] == ch) {
                index = i;
                break;
            }
        }
        reverse(word.begin(), word.begin() + index + 1);
        return word;
    }
};

int main() {
    auto ans = Solution().reversePrefix("xyxzxe", 'z');
    cout << ans << endl;
    ans = Solution().reversePrefix("abcd", 'z');
    cout << ans << endl;
    return 0;
}