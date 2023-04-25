/**
 * Author: Deean
 * Date: 2023-04-24 23:08
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int distributeCandies(vector<int> &candyType) {
        unordered_set<int> type;
        for (auto candy: candyType) {
            type.emplace(candy);
        }
        return min(candyType.size() / 2, type.size());
    }
};

int main() {
    vector<int> candyType = {1, 1, 2, 2, 3, 3};
    auto ans = Solution().distributeCandies(candyType);
    cout << toString(ans) << endl;
    return 0;
}
