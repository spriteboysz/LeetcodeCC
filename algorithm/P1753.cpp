/**
 * Author: Deean
 * Date: 2023-05-14 12:10
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int sum = a + b + c;
        int maximum = max({a, b, c});
        if (sum - maximum < maximum) {
            return sum - maximum;
        }
        return sum / 2;
    }
};

int main() {
    auto ans = Solution().maximumScore(4, 4, 6);
    cout << toString(ans) << endl;
    return 0;
}
