/**
 * Author: Deean
 * Date: 2023-05-15 22:55
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        int position[] = {a, b, c};
        sort(position, position + 3);
        a = position[0], b = position[1], c = position[2];
        int minimum = 2;
        if (c - b == 1 && b - a == 1) {
            minimum = 0;
        } else if (c - b <= 2 || b - a <= 2) {
            minimum = 1;
        }
        int maximum = c - a - 2;
        return {minimum, maximum};
    }
};

int main() {
    auto ans = Solution().numMovesStones(1, 2, 5);
    cout << toString(ans) << endl;
    return 0;
}
