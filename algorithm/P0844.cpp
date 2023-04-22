/**
 * Author: Deean
 * Date: 2023-04-22 17:02
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string process(string s) {
        string ss;
        for (char c: s) {
            if (c != '#') {
                ss.push_back(c);
            } else if (!ss.empty()) {
                ss.pop_back();
            }
        }
        return ss;
    }

    bool backspaceCompare(string s, string t) {
        return process(s) == process(t);
    }
};

int main() {
    auto ans = Solution().backspaceCompare("ab#c", "ad#c");
    cout << toString(ans) << endl;
    return 0;
}
