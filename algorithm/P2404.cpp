/**
 * Author: Deean
 * Date: 2023-04-12 23:28
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int mostFrequentEven(vector<int> &nums) {
        unordered_map<int, int> map;
        for (const auto &num: nums) {
            if (num % 2 == 0) map[num]++;
        }
        int res = -1, cnt = 0;
        for (auto &item: map) {
            if (res == -1 || item.second > cnt || item.second == cnt && item.first < res) {
                res = item.first;
                cnt = item.second;
            }
        }
        return res;
    }
};

int main() {
    vector<int> nums = {0, 1, 2, 2, 4, 4, 1};
    auto ans = Solution().mostFrequentEven(nums);
    cout << toString(ans) << endl;
    return 0;
}
