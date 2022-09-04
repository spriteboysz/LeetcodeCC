/**
 * Author: Deean
 * Date: 2022-09-04 17:22
 * FileName: offer/O0017.cpp
 * Description: 剑指 Offer 17. 打印从1到最大的n位数
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    vector<int> printNumbers(int n) {
        vector<int> numbers;
        for (int i = 1; i < pow(10, n); ++i) {
            numbers.push_back(i);
        }
        return numbers;
    }
};

int main() {
    auto ans = Solution().printNumbers(2);
    cout << vectorToString(ans) << endl;
    return 0;
}