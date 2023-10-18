/**
 * Author: Deean
 * Date: 2022-09-03 16:24
 * FileName: interview/M00160001.cpp
 * Description: 面试题 16.01. 交换数字
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> swapNumbers(vector<int> &numbers) {
        numbers[1] = numbers[0] ^ numbers[1];
        numbers[0] = numbers[0] ^ numbers[1];
        numbers[1] = numbers[0] ^ numbers[1];
        return numbers;
    }
};

int main() {
    vector<int> numbers = {1, 2};
    auto ans = Solution().swapNumbers(numbers);
    cout << vectorToString(ans) << endl;
    return 0;
}