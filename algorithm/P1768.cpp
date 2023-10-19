/**
 * Author: Deean
 * Date: 2022-09-09 23:15
 * FileName: algorithm/P1768.cpp
 * Description: 1768. 交替合并字符串
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ss = "";
        int n1 = word1.size(), n2 = word2.size();
        for (int i = 0; i < n1 && i < n2; ++i) {
            ss.push_back(word1[i]);
            ss.push_back(word2[i]);
        }
        if (n1 > n2) ss += word1.substr(n2, n1);
        if (n1 < n2) ss += word2.substr(n1, n2);
        return ss;
    }
};

int main() {
    auto ans = Solution().mergeAlternately("ab", "pqrs");
    cout << toString(ans) << endl;
    return 0;
}