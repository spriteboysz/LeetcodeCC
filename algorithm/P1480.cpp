/**
 * Author: Deean
 * Date: 2022-09-03 16:19
 * FileName: algorithm/P1480.cpp
 * Description: 1480. 一维数组的动态和
 */

#include <iostream>
#include <vector>
#include <codec.h>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int> &nums) {
        vector<int> running;
        int sum = 0;
        for (int num : nums) {
            sum += num;
            running.push_back(sum);
        }
        return running;
    }
};

int main() {
    vector<int> nums = {3, 1, 2, 10, 1};
    auto ans = Solution().runningSum(nums);
    cout << vectorToString(ans) << endl;
    return 0;
}