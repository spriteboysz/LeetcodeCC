/**
 * Author: Deean
 * Date: 2022-09-09 23:07
 * FileName: algorithm/P0762.cpp
 * Description: 762. 二进制表示中质数个计算置位
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        vector<int> count = {2, 3, 5, 7, 11, 13, 17, 19};
        int ret = 0;
        for (int i = left; i <= right; ++i) {
            int num = i, cnt = 0;
            while (num) {
                cnt += num & 1;
                num >>= 1;
            }
            for (auto item: count) {
                if (item == cnt) {
                    ret++;
                    break;
                }
            }
        }
        return ret;
    }
};

int main() {
    auto ans = Solution().countPrimeSetBits(10, 15);
    cout << toString(ans) << endl;
    return 0;
}