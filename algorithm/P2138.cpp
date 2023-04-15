/**
 * Author: Deean
 * Date: 2023-04-15 11:59
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <string> divideString(string s, int k, char fill) {
        int n = s.size();
        if (n % k != 0) {
            s.append((k - n % k), fill);
        }
        cout << s << endl;
        vector <string> divide;
        for (int i = 0, m = s.size(); i < m; i += k) {
            string ss = "";
            for (int j = 0; j < k; ++j) {
                ss.append(1, s[i + j]);
            }
            divide.push_back(ss);
        }
        return divide;
    }
};

int main() {
    auto ans = Solution().divideString("abcdefghij", 3, 'x');
    cout << toString(ans) << endl;
    return 0;
}
