/**
 * Author: Deean
 * Date: 2022-09-09 00:02
 * FileName: algorithm/P1460.cpp
 * Description: 1460. 通过翻转子数组使两个数组相等
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    bool canBeEqual(vector<int> &target, vector<int> &arr) {
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        return target == arr;
    }
};

int main() {
    vector<int> target = {1, 2, 3, 4}, arr = {2, 4, 1, 3};
    auto ans = Solution().canBeEqual(target, arr);
    cout << toString(ans) << endl;
    return 0;
}