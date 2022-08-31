/**
 * Author: Deean
 * Date: 2022-08-30 22:58
 * FileName: algorithm/P2235.cpp
 * Description: 2235. 两整数相加
 */

#include <iostream>

using namespace std;

class Solution {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
};


int main() {
    auto *solution = new Solution();
    int ans = solution->sum(2, 3);
    cout << ans << endl;
    return 0;
}