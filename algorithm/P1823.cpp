/**
 * Author: Deean
 * Date: 2023-05-12 22:29
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findTheWinner(int n, int k) {
        if (n == 1) return 1;
        return (k + findTheWinner(n - 1, k) - 1) % n + 1;
    }
};

int main() {
    auto ans = Solution().findTheWinner(5, 2);
    cout << toString(ans) << endl;
    return 0;
}
