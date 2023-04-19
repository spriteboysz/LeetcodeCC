/**
 * Author: Deean
 * Date: 2023-04-18 23:28
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> hash(55, 0);
        for (int i = 1; i <= n; ++i) {
            int sum = 0, num = i;
            while (num) {
                sum += num % 10;
                num /= 10;
            }
            hash[sum]++;
        }
        int maximum = 0;
        for (auto num: hash) {
            maximum = max(maximum, num);
        }
        int cnt = 0;
        for (auto num: hash) {
            if (num == maximum) {
                cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().countLargestGroup(24);
    cout << toString(ans) << endl;
    return 0;
}
