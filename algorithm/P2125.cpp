/**
 * Author: Deean
 * Date: 2022-09-02 22:46
 * FileName: algorithm/P2125.cpp
 * Description: 2125. 银行中的激光束数量
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> nums;
        for (string row : bank) {
            int cur = count(row.begin(), row.end(), '1');
            if (cur != 0) nums.push_back(cur);
        }
        int cnt = 0;
        for (int i = 1; i < nums.size(); ++i) {
            cnt += nums[i - 1] * nums[i];
        }
        return cnt;
    }
};

int main() {
    vector<string> bank = {"011001","000000","010100","001000"};
    auto ans = Solution().numberOfBeams(bank);
    cout << ans << endl;
    return 0;
}