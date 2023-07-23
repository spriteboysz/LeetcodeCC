/**
 * Author: Deean
 * Date: 2023-07-23 21:49
 * FileName: algorithm
 * Description:167. 两数之和 II - 输入有序数组
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) {
                return {left + 1, right + 1};
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return {-1, -1};
    }
};

int main() {
    vector<int> numbers = {2, 7, 11, 15};
    auto ans = Solution().twoSum(numbers, 9);
    cout << toString(ans) << endl;
    return 0;
}
