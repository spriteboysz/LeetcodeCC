/**
 * Author: Deean
 * Date: 2022-09-08 23:27
 * FileName: algorithm/P1370.cpp
 * Description: 1370. 上升下降字符串
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    string sortString(string s) {
        int alphabet[26] = {0};
        for (auto c: s) alphabet[c - 'a']++;
        string ss = "";
        while (ss.size() < s.size()) {
            for (int i = 0; i < 26; ++i) {
                if (alphabet[i] > 0) {
                    ss.push_back(i + 'a');
                    alphabet[i]--;
                }
            }
            for (int i = 25; i >= 0; --i) {
                if (alphabet[i] > 0) {
                    ss.push_back(i + 'a');
                    alphabet[i]--;
                }
            }
        }
        return ss;
    }
};

int main() {
    auto ans = Solution().sortString("leetcode");
    cout << toString(ans) << endl;
    return 0;
}