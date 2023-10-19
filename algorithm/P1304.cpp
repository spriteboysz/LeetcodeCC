/**
 * Author: Deean
 * Date: 2022-09-07 21:05
 * FileName: algorithm/P1304.cpp
 * Description: 1304. 和为零的 N 个不同整数
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> vec;
        for (int i = 1; i <= n / 2; ++i) {
            vec.push_back(-i);
            vec.push_back(i);
        }
        if (n % 2 == 1) vec.push_back(0);
        return vec;
    }
};

int main() {
    for (int i = 0; i < 10; ++i) {
        auto ans = Solution().sumZero(i);
        cout << i << " " << toString(ans) << endl;
    }
    return 0;
}