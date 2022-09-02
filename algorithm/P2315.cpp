/**
 * Author: Deean
 * Date: 2022-09-02 22:39
 * FileName: algorithm/P2315.cpp
 * Description: 2315. 统计星号
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countAsterisks(string s) {
        int count = 0, index = 0;
        for (char c : s) {
            if (c == '*' && index % 2 == 0) count++;
            if (c == '|') index++;
        }
        return count;
    }
};

int main() {
    auto ans = Solution().countAsterisks("yo|uar|e**|b|e***au|tifu|l");
    cout << ans << endl;
    return 0;
}