/**
 * Author: Deean
 * Date: 2023-04-30 16:52
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string compressString(string S) {
        string ss = "";
        int cnt = 0;
        char cur = S[0];
        for (auto c: S) {
            if (cur == c) {
                cnt++;
            } else {
                ss += cur + to_string(cnt);
                cur = c;
                cnt = 1;
            }
        }
        ss += cur + to_string(cnt);
        return ss.size() >= S.size() ? S : ss;
    }
};

int main() {
    auto ans = Solution().compressString("aabcccccaaa");
    cout << toString(ans) << endl;
    return 0;
}
