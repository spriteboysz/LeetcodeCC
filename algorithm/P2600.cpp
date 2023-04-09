/**
 * Author: Deean
 * Date: 2023-04-09 13:00
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        if (numNegOnes < 0) return -1;
        if (k <= numOnes) {
            return k;
        }
        if (k <= numOnes + numZeros){
            return numOnes;
        }
        return numOnes - (k - numOnes - numZeros);
    }
};

int main() {
    auto ans = Solution().kItemsWithMaximumSum(3, 2, 0, 2);
    cout << toString(ans) << endl;
    return 0;
}
