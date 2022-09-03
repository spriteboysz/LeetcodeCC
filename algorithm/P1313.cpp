/**
 * Author: Deean
 * Date: 2022-09-03 23:03
 * FileName: algorithm/P1313.cpp
 * Description: 1313. 解压缩编码列表
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    vector<int> decompressRLElist(vector<int> &nums) {
        vector<int> decode;
        for (int i = 0; i < nums.size(); i += 2) {
            for (int j = 0; j < nums[i]; ++j) {
                decode.push_back(nums[i + 1]);
            }
        }
        return decode;
    }
};

int main() {
    vector<int> nums = {1, 1, 2, 3};
    auto ans = Solution().decompressRLElist(nums);
    cout << vectorToString(ans) << endl;
    return 0;
}