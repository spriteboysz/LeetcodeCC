/**
 * Author: Deean
 * Date: 2023-04-09 21:59
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int splitNum(int num) {
        string ss = to_string(num);
        sort(ss.begin(), ss.end());
        int a = 0, b = 0;
        for (int i = 0; i < ss.length(); ++i) {
            if (i % 2 == 0) {
                a = a * 10 + ss[i] - '0';
            } else {
                b = b * 10 + ss[i] - '0';
            }
        }
        return a + b;
    }
};

int main() {
    auto ans = Solution().splitNum(4352);
    cout << toString(ans) << endl;
    return 0;
}
