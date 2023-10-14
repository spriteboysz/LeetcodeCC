/**
 * Author: Deean
 * Date: 2023-10-14 17:05
 * FileName: LCP
 * Description: LCR 173. 点名
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int takeAttendance(vector<int> &records) {
        int n = records.size();
        for (int i = 0; i < n; ++i) {
            if (i != records[i]) {
                return i;
            }
        }
        return n;
    }
};

int main() {
    vector<int> records = {0, 1, 2, 3, 4, 5, 6, 7};
    auto ans = Solution().takeAttendance(records);
    cout << toString(ans) << endl;
    return 0;
}