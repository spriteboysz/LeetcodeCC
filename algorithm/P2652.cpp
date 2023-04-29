/**
 * Author: Deean
 * Date: 2023-04-29 19:34
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int sumOfMultiples(int n) {
        int sum = 0;
        for (int i = 1; i <= n; ++i) {
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
                sum += i;
            }
        }
        return sum;
    }
};

int main() {
    auto ans = Solution().sumOfMultiples(10);
    cout << toString(ans) << endl;
    return 0;
}
