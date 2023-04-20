/**
 * Author: Deean
 * Date: 2023-04-20 23:21
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minCostToMoveChips(vector<int> &position) {
        int even = 0, odd = 0;
        for (auto pos: position) {
            if (pos % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
        return min(even, odd);
    }
};

int main() {
    vector<int> position = {2, 2, 2, 3, 3};
    auto ans = Solution().minCostToMoveChips(position);
    cout << toString(ans) << endl;
    return 0;
}
