/**
 * Author: Deean
 * Date: 2023-04-30 16:35
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> divingBoard(int shorter, int longer, int k) {
        if (k == 0) return {};
        if (shorter == longer) {
            return vector<int>(1, shorter * k);
        }

        vector<int> lengths(k + 1);
        for (int i = 0; i <= k; ++i) {
            lengths[i] = shorter * (k - i) + longer * i;
        }
        return lengths;
    }
};

int main() {
    auto ans = Solution().divingBoard(1, 2, 3);
    cout << toString(ans) << endl;
    return 0;
}
