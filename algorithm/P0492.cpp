/**
 * Author: Deean
 * Date: 2023-04-26 22:00
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> constructRectangle(int area) {
        for (int i = (int) sqrt(area); i >= 1; --i) {
            if (area % i == 0) {
                return {area / i, i};
            }
        }
        return {area, 1};
    }
};

int main() {
    auto ans = Solution().constructRectangle(2);
    cout << toString(ans) << endl;
    return 0;
}
