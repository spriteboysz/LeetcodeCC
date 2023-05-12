/**
 * Author: Deean
 * Date: 2023-05-11 23:48
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int process(int num) {
        int rev = 0;
        while (num) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }
        return rev;
    }

    bool sumOfNumberAndReverse(int num) {
        for (int i = 0; i <= num; ++i) {
            if (i + process(i) == num) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    auto ans = Solution().sumOfNumberAndReverse(443);
    cout << toString(ans) << endl;
    return 0;
}
