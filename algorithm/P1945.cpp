/**
 * Author: Deean
 * Date: 2023-04-15 19:43
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int getLucky(string s, int k) {
        string ss = "";
        for (char c: s) {
            ss.append(to_string(c - 'a' + 1));
        }
        int lucky;
        while (k-- > 0) {
            lucky = 0;
            for (char c: ss) {
                lucky += c - '0';
            }
            ss = to_string(lucky);
        }
        return lucky;
    }
};

int main() {
    auto ans = Solution().getLucky("leetcode", 2);
    cout << toString(ans) << endl;
    return 0;
}
