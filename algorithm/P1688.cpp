/**
 * Author: Deean
 * Date: 2022-09-02 22:25
 * FileName: algorithm/P1688.cpp
 * Description: 1688. 比赛中的配对次数
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numberOfMatches(int n) {
        int count = 0;
        while (n > 1) {
            count += n / 2;
            if (n % 2 == 0) {
                n /= 2;
            } else {
                n = n / 2 + 1;
            }
        }
        return count;
    }
};

int main() {
    auto ans = Solution().numberOfMatches(14);
    cout << ans << endl;
    return 0;
}