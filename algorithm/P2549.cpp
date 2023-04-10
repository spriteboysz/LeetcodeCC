/**
 * Author: Deean
 * Date: 2023-04-10 22:58
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int distinctIntegers(int n) {
        return n == 1 ? 1 : n - 1;
    }
};

int main() {
    auto ans = Solution().distinctIntegers(5);
    cout << toString(ans) << endl;
    return 0;
}
