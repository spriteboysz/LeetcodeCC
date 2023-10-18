/**
 * Author: Deean
 * Date: 2022-09-04 23:36
 * FileName: interview/M00050007.cpp
 * Description: 面试题 05.07. 配对交换
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int exchangeBits(int num) {
        return (((num & 0x55555555) << 1) | ((num & 0xaaaaaaaa) >> 1));
    }
};

int main() {
    auto ans = Solution().exchangeBits(3);
    cout << ans << endl;
    return 0;
}