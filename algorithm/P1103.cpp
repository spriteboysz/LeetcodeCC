/**
 * Author: Deean
 * Date: 2023-04-21 21:48
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> distribute(num_people);
        for (int i = 0; candies > 0; ++i) {
            distribute[i % num_people] += min(i + 1, candies);
            candies -= i + 1;
        }
        return distribute;
    }
};

int main() {
    auto ans = Solution().distributeCandies(10, 3);
    cout << toString(ans) << endl;
    return 0;
}
