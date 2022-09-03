/**
 * Author: Deean
 * Date: 2022-09-03 20:26
 * FileName: algorithm/P2103.cpp
 * Description: 2103. 环和杆
 */

#include <iostream>

using namespace std;

class Solution {
public:
    int countPoints(string rings) {
        int rod[10] = {0};
        for (int i = 0; i < rings.size(); i += 2) {
            char color = rings[i];
            int index = rings[i + 1] - '0';
            if (color == 'B') rod[index] |= 1;
            if (color == 'R') rod[index] |= 2;
            if (color == 'G') rod[index] |= 4;
        }
        int cnt = 0;
        for (int i = 0; i < 10; ++i) {
            if (rod[i] == 7) cnt++;
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().countPoints("B0R0G0R9R0B0G0");
    cout << ans << endl;
    ans = Solution().countPoints("B0B6G0R6R0R6G9");
    cout << ans << endl;
    return 0;
}