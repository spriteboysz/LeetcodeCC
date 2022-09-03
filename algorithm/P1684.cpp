/**
 * Author: Deean
 * Date: 2022-09-03 16:31
 * FileName: algorithm/P1684.cpp
 * Description: 1684. 统计一致字符串的数目
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string> &words) {
        set<char> set(allowed.begin(), allowed.end());
        int cnt = 0;
        for (string word: words) {
            bool flag = true;
            for (char c: word) {
                if (set.count(c) == 0) {
                    flag = false;
                    break;
                }
            }
            if (flag) cnt++;
        }
        return cnt;
    }
};

int main() {
    vector<string> words = {"cc", "acd", "b", "ba", "bac", "bad", "ac", "d"};
    auto ans = Solution().countConsistentStrings("cad", words);
    cout << ans << endl;
    return 0;
}