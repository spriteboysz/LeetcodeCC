/**
 * Author: Deean
 * Date: 2023-04-10 22:54
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> separateDigits(vector<int> &nums) {
        string ss = "";
        for (auto num: nums) {
            ss.append(to_string(num));
        }
        vector<int> digits;
        for (auto c: ss) {
            digits.push_back(c - '0');
        }
        return digits;
    }
};

int main() {
    vector<int> nums = {13, 25, 83, 77};
    auto ans = Solution().separateDigits(nums);
    cout << toString(ans) << endl;
    return 0;
}
