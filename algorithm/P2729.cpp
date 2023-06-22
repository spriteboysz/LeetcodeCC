/**
 * Author: Deean
 * Date: 2023-06-22 22:56
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isFascinating(int n) {
        string ss = to_string(n) + to_string(n * 2) + to_string(n * 3);
        if (ss.length() != 9) return false;
        int *digits = new int[10]();
        for (auto c: ss) {
            digits[c - '0'] += 1;
        }
        for (int i = 1; i < 10; ++i) {
            if (digits[i] != 1) return false;
        }
        return true;
    }
};

int main() {
    auto ans = Solution().isFascinating(192);
    cout << toString(ans) << endl;
    return 0;
}
