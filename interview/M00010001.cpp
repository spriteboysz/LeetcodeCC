/**
 * Author: Deean
 * Date: 2022-09-04 23:15
 * FileName: interview/M00010001.cpp
 * Description: 面试题 01.01. 判定字符是否唯一
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isUnique(string astr) {
        int count[26] = {0};
        for (auto &c: astr) {
            count[c - 'a']++;
        }
        for (int i = 0; i < 26; ++i) {
            if ((count[i]) > 1) return false;
        }
        return true;
    }
};

int main() {
    auto ans = Solution().isUnique("leetcode");
    cout << ans << endl;
    return 0;
}