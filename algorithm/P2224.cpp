/**
 * Author: Deean
 * Date: 2022-09-05 23:48
 * FileName: algorithm/P2224.cpp
 * Description: 2224. 转化时间需要的最少操作数
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int convertTime(string current, string correct) {
        int time1 = stoi(current.substr(0, 2)) * 60 + stoi(current.substr(3, 2));
        int time2 = stoi(correct.substr(0, 2)) * 60 + stoi(correct.substr(3, 2));
        int diff = time2 - time1;
        int cnt = 0;
        for (int t: {60, 15, 5, 1}) {
            cnt += diff / t;
            diff %= t;
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().convertTime("02:30", "04:35");
    cout << toString(ans) << endl;
    return 0;
}