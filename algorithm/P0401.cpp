/**
 * Author: Deean
 * Date: 2023-04-26 23:20
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int process(int num) {
        int cnt = 0;
        while (num) {
            cnt += num & 1;
            num >>= 1;
        }
        return cnt;
    }

    vector <string> readBinaryWatch(int turnedOn) {
        vector <string> times;
        for (int i = 0; i < 12 * 60; ++i) {
            int hh = i / 60, mm = i % 60;
            char ss[6];
            if (process(hh) + process(mm) == turnedOn) {
                ::sprintf(ss, "%d:%02d", hh, mm);
                times.push_back(ss);
            }
        }
        return times;
    }
};

int main() {
    auto ans = Solution().readBinaryWatch(1);
    cout << toString(ans) << endl;
    return 0;
}
