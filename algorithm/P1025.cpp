/**
 * Author: Deean
 * Date: 2023-04-21 22:28
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool divisorGame(int n) {
        return n % 2 == 0;
    }
};

int main() {
    auto ans = Solution().divisorGame(2);
    cout << toString(ans) << endl;
    return 0;
}
