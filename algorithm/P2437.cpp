/**
 * Author: Deean
 * Date: 2023-04-12 22:02
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int countTime(string time) {
        int cnt = 0;
        for (int i = 0; i < 24 * 60; ++i) {
            char curr[6];
            sprintf(curr, "%02d:%02d", i /60, i % 60);
            bool flag = true;
            for (int j = 0; j < 5; ++j) {
                if (time[j] != '?' && time[j] != curr[j]) {
                    flag = false;
                    break;
                }
            }
            if (flag) cnt++;
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().countTime("0?:0?");
    cout << toString(ans) << endl;
    return 0;
}
