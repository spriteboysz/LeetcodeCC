/**
 * Author: Deean
 * Date: 2023-04-16 20:29
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int boxes[55] = {0};
        for (int i = lowLimit; i <= highLimit; ++i) {
            int sum = 0, num = i;
            while (num) {
                sum += num % 10;
                num /= 10;
            }
            boxes[sum]++;
        }

        int maximum = 0;
        for (auto box: boxes) {
            maximum = max(maximum, box);
        }
        return maximum;
    }
};

int main() {
    auto ans = Solution().countBalls(19, 28);
    cout << toString(ans) << endl;
    return 0;
}
