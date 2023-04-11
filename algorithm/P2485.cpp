/**
 * Author: Deean
 * Date: 2023-04-11 23:24
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        int sum = n * (n + 1) / 2;
        int x = sqrt(sum);
        return x * x == sum ? x : -1;
    }
};

int main() {
    auto ans = Solution().pivotInteger(8);
    cout << toString(ans) << endl;
    return 0;
}
