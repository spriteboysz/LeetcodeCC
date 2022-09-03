/**
 * Author: Deean
 * Date: 2022-09-03 17:29
 * FileName: algorithm/P1832.cpp
 * Description: 1832. 判断句子是否为全字母句
 */

#include <iostream>

using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        int alphabet[26] = {0}; // 数组初始化
        for (auto c: sentence) {
            alphabet[c - 'a']++;
        }
        for (int i = 0; i < 26; ++i) {
            if (alphabet[i] == 0) return false;
        }
        return true;
    }
};

int main() {
    auto ans = Solution().checkIfPangram("thequickbrownfoxjumpsoverthelazydog");
    cout << ans << endl;
    ans = Solution().checkIfPangram("hxsdz");
    cout << ans << endl;
    return 0;
}