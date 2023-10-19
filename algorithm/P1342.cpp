/**
 * Author: Deean
 * Date: 2022-09-03 20:10
 * FileName: algorithm/P1342.cpp
 * Description: 1342. 将数字变成 0 的操作次数
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int cnt = 0;
        while (num) {
            cnt++;
            if (num % 2 == 0) num /= 2;
            else if (num % 2 == 1) num--;
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().numberOfSteps(123);
    cout << ans << endl;
    return 0;
}