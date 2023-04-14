/**
 * Author: Deean
 * Date: 2023-04-14 22:22
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int fillCups(vector<int> &amount) {
        sort(amount.begin(), amount.end());
        if (amount[2] > amount[1] + amount[0]) {
            return amount[2];
        }
        return (amount[2] + amount[1] + amount[0] + 1) / 2;
    }
};

int main() {
    vector<int> amount = {5, 4, 4};
    auto ans = Solution().fillCups(amount);
    cout << toString(ans) << endl;
    return 0;
}
