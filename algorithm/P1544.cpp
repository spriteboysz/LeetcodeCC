/**
 * Author: Deean
 * Date: 2023-04-16 22:39
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string makeGood(string s) {
        string ss = "";
        for (char c: s) {
            int n = ss.size();
            if (n != 0 && abs(c - ss[n - 1]) == 32) {
                ss.pop_back();
            } else {
                ss.push_back(c);
            }
        }
        return ss;
    }
};

int main() {
    auto ans = Solution().makeGood("abBAcC");
    cout << toString(ans) << endl;
    return 0;
}
