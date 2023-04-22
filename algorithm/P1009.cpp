/**
 * Author: Deean
 * Date: 2023-04-21 22:58
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) return 1;
        int k = 1;
        while (n > k) {
            k <<= 1;
        }
        return n == k ? k - 1 : k - 1 - n;
    }
};

int main() {
    auto ans = Solution().bitwiseComplement(10);
    cout << toString(ans) << endl;
    return 0;
}
