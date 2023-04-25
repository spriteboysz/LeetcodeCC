/**
 * Author: Deean
 * Date: 2023-04-24 23:40
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n) {
        for (int i = 0, m = flowerbed.size(); i < m; i += 2) {
            if (flowerbed[i] == 0) {
                if (i == m - 1 || flowerbed[i + 1] == 0) {
                    n--;
                } else {
                    i++;
                }
            }
        }
        return n <= 0;
    }
};

int main() {
    vector<int> flowerbed = {1, 0, 0, 0, 1};
    auto ans = Solution().canPlaceFlowers(flowerbed, 1);
    cout << toString(ans) << endl;
    return 0;
}
