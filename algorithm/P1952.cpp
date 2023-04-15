/**
 * Author: Deean
 * Date: 2023-04-15 19:35
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isPrime(int num) {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) return false;
        }
        return true;
    }

    bool isThree(int n) {
        vector<int> primes;
        for (int i = 2; i <= 100; ++i) {
            if (isPrime(i)) primes.push_back(i);
        }
        for (int i = 0; i < primes.size(); i++) {
            if (n == primes[i] * primes[i]) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    auto ans = Solution().isThree(4);
    cout << toString(ans) << endl;
    return 0;
}
