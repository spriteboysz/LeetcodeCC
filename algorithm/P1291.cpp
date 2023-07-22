/**
 * Author: Deean
 * Date: 2023-07-21 23:10
 * FileName: algorithm
 * Description:1291. 顺次数
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> seq;
        for (int i = 1; i <= 9; ++i) {
            int num = i;
            for (int j = i + 1; j <= 9; ++j) {
                num = num * 10 + j;
                if (num >= low && num <= high) {
                    seq.push_back(num);
                }
            }
        }
        sort(seq.begin(), seq.end());
        return seq;
    }
};

int main() {
    auto ans = Solution().sequentialDigits(1000, 13000);
    cout << toString(ans) << endl;
    return 0;
}
