/**
 * Author: Deean
 * Date: 2023-04-14 22:39
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string digitSum(string s, int k) {
        while (s.size() > k) {
            string ss = "";
            for (int i = 0, n = s.size(); i < n; i += k) {
                int num = 0;
                for (int j = i; j < min(i + k, n); ++j) {
                    num += s[j] - '0';
                }
                ss.append(to_string(num));
            }
            s = ss;
        }
        return s;
    }
};

int main() {
    auto ans = Solution().digitSum("11111222223", 3);
    cout << toString(ans) << endl;
    return 0;
}
