/**
 * Author: Deean
 * Date: 2022-09-10 17:08
 * FileName: algorithm/P1408.cpp
 * Description: 1408. 数组中的字符串匹配
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    vector<string> stringMatching(vector<string> &words) {
        vector<string> vec;
        int n = words.size();
        for (int i = 0; i < n; ++i) {
            string sub = words[i];
            for (int j = 0; j < n; ++j) {
                if (i != j && words[j].find(sub) != string::npos) {
                    vec.push_back(sub);
                    break;
                }
            }
        }
        return vec;
    }
};

int main() {
    vector<string> words = {"leetcode", "et", "code"};
    auto ans = Solution().stringMatching(words);
    cout << toString(ans) << endl;
    return 0;
}