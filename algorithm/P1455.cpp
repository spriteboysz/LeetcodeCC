/**
 * Author: Deean
 * Date: 2023-07-20 22:56
 * FileName: algorithm
 * Description:1455. 检查单词是否为句中其他单词的前缀
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string word;
        for (int i = 1; getline(ss, word, ' '); ++i) {
            int start = word.find(searchWord);
            if (start == 0) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    auto ans = Solution().isPrefixOfWord("this problem is an easy problem", "pro");
    cout << toString(ans) << endl;
    return 0;
}
