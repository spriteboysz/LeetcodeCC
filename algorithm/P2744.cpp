/**
 * Author: Deean
 * Date: 2023-07-14 22:33
 * FileName: algorithm
 * Description:2744. 最大字符串配对数目
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maximumNumberOfStringPairs(vector <string> &words) {
        int cnt = 0;
        for (int i = 0, n = words.size(); i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (words[i][0] == words[j][1] && words[i][1] == words[j][0]) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

int main() {
    vector <string> words = {"cd", "ac", "dc", "ca", "zz"};
    auto ans = Solution().maximumNumberOfStringPairs(words);
    cout << toString(ans) << endl;
    return 0;
}
