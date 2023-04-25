/**
 * Author: Deean
 * Date: 2023-04-24 23:47
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 1) return false;
        int sum = 1;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                sum += i;
                if (i * i < num) {
                    sum += num / i;
                }
            }
        }
        return num == sum;
    }
};

int main() {
    auto ans = Solution().checkPerfectNumber(28);
    cout << toString(ans) << endl;
    return 0;
}
