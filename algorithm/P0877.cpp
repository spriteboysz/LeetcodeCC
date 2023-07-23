/**
 * Author: Deean
 * Date: 2023-07-22 23:17
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        return piles.size() >= 2;
    }
};

int main() {
    vector<int> piles = {5,3,4,5};
    auto ans = Solution().stoneGame(piles);
    cout << toString(ans) << endl;
    return 0;
}
