/**
 * Author: Deean
 * Date: 2022-08-31 23:12
 * FileName: algorithm/P1689.cpp
 * Description: 1689. 十-二进制数的最少数目
 */

# include <iostream>
# include <vector>

using namespace std;

class Solution {
public:
    int minPartitions(string n) {
        int num = 0;
        for (char c : n) {
            num = max(num, c - '0');
            if (num == 9) break;
        }
        return num;
    }
};

int main() {
    auto ans = Solution().minPartitions("27346209830709182346");
    cout << ans << endl;
    return 0;
}