/**
 * Author: Deean
 * Date: 2023-07-22 23:28
 * FileName: algorithm
 * Description:869. 重新排序得到 2 的幂
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string process(int num) {
        string ss = to_string(num);
        vector<char> digits;
        for (char c: ss) {
            digits.push_back(c);
        }
        sort(digits.begin(), digits.end());
        ss.clear();
        for (char c: digits) {
            ss += "#" + to_string(c);
        }
        return ss;
    }

    bool reorderedPowerOf2(int n) {
        string target = process(n);
        for (int i = 1, product = 1; product <= pow(10, 9); ++i) {
            if (process(product) == target) {
                return true;
            }
            product *= 2;
        }
        return false;
    }
};

int main() {
    auto ans = Solution().reorderedPowerOf2(64);
    cout << toString(ans) << endl;
    return 0;
}
