/**
 * Author: Deean
 * Date: 2022-09-09 22:52
 * FileName: algorithm/P1880.cpp
 * Description: 1880. 检查某单词是否等于两单词之和
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int process(string s) {
        int num = 0;
        for (char c: s) {
            num = num * 10 + c - 'a';
        }
        return num;
    }

    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return process(firstWord) + process(secondWord) == process(targetWord);
    }
};

int main() {
    auto ans = Solution().isSumEqual("aaa", "a", "aaaa");
    cout << toString(ans) << endl;
    return 0;
}