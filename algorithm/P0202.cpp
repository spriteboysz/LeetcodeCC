/**
 * Author: Deean
 * Date: 2023-04-28 21:44
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        seen.emplace(n);
        while (n != 1) {
            int sum = 0;
            while (n > 0) {
                sum += (n % 10) * (n % 10);
                n /= 10;
            }
            n = sum;
            if (seen.count(n) > 0) {
                return false;
            }
            seen.emplace(n);
        }
        return true;
    }
};

int main() {
    auto ans = Solution().isHappy(2);
    cout << toString(ans) << endl;
    return 0;
}
