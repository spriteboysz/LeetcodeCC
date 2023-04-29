/**
 * Author: Deean
 * Date: 2023-04-29 13:51
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minArray(vector<int> &numbers) {
        int minimum = numbers[0];
        for (auto num: numbers) {
            minimum = min(minimum, num);
        }
        return minimum;
    }
};

int main() {
    vector<int> numbers = {3, 4, 5, 1, 2};
    auto ans = Solution().minArray(numbers);
    cout << toString(ans) << endl;
    return 0;
}
