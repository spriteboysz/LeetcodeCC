/**
 * Author: Deean
 * Date: 2022-09-01 23:54
 * FileName: algorithm/P1431.cpp
 * Description: 1431. 拥有最多糖果的孩子
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies) {
        int maximum = 0;
        for (int candy : candies) maximum = max(maximum, candy);

        vector<bool> vec;
        for (int candy : candies) {
            vec.push_back(candy + extraCandies >= maximum);
        }
        return vec;
    }
};

int main() {
    vector<int> candies = {4, 2, 1, 1, 2};
    auto ans = Solution().kidsWithCandies(candies, 1);
    for (bool b: ans) cout << b << " ";
    cout << endl;
    return 0;
}