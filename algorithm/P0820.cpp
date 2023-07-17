/**
 * Author: Deean
 * Date: 2023-07-16 22:01
 * FileName: algorithm
 * Description:820. 单词的压缩编码
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
private:
    bool check(string sub, string s) {
        for (int pos1 = sub.size() - 1, pos2 = s.size() - 1; pos1 >= 0; --pos1, --pos2) {
            if (sub[pos1] != s[pos2]) {
                return false;
            }
        }
        return true;
    }

public:
    int minimumLengthEncoding(vector <string> &words) {
        sort(words.begin(), words.end(), [&](string a, string b) {
            return a.size() < b.size();
        });
        int length = 0;
        for (int i = 0, n = words.size(); i < n; ++i) {
            bool flag = true;
            for (int j = i + 1; j < n; ++j) {
                if (check(words[i], words[j])) {
                    flag = false;
                    break;
                }
            }
            if (flag) length += words[i].size() + 1;
        }
        return length;
    }
};

int main() {
    vector <string> words = {"time", "me", "bell"};
    auto ans = Solution().minimumLengthEncoding(words);
    cout << toString(ans) << endl;
    return 0;
}
