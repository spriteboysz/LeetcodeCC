/**
 * Author: Deean
 * Date: 2023-04-16 20:23
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string maximumTime(string time) {
        for (int i = 24 * 60 - 1; i >= 0; --i) {
            char curr[6];
            sprintf(curr, "%02d:%02d", i / 60, i % 60);
            bool flag = true;
            for (int j = 0; j < 5; ++j) {
                if (time[j] != '?' && time[j] != curr[j]) {
                    flag = false;
                    break;
                }
            }
            if (flag) return curr;
        }
        return "";
    }
};

int main() {
    auto ans = Solution().maximumTime("2?:?0");
    cout << toString(ans) << endl;
    return 0;
}
