/**
 * Author: Deean
 * Date: 2023-04-20 23:43
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    const int MOD = 1e9 + 7;

    bool isPrime(int n) {
        if (n == 1) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    long factorial(int n) {
        long res = 1;
        for (int i = 1; i <= n; i++) {
            res *= i;
            res %= MOD;
        }
        return res;
    }

    int numPrimeArrangements(int n) {
        int cnt = 0;
        for (int i = 1; i <= n; ++i) {
            if (isPrime(i)) cnt++;
        }
        return (int) (factorial(cnt) * factorial(n - cnt) % MOD);
    }
};

int main() {
    auto ans = Solution().numPrimeArrangements(100);
    cout << toString(ans) << endl;
    return 0;
}
