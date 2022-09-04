/**
 * Author: Deean
 * Date: 2022-09-04 21:47
 * FileName: algorithm/P0728.cpp
 * Description: 728. 自除数
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    bool check(int num) {
        string s = to_string(num);
        for (auto c: s) {
            if ((c - '0' == 0) || num % (c - '0') != 0) return false;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> nums;
        for (int i = left; i <= right; ++i) {
            if (check(i)) nums.push_back(i);
        }
        return nums;
    }
};

int main() {
    auto ans = Solution().selfDividingNumbers(47, 85);
    cout << vectorToString(ans) << endl;
    return 0;
}