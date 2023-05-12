/**
 * Author: Deean
 * Date: 2023-05-12 21:58
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int countVowelStrings(int n) {
        return (n + 1) * (n + 2) * (n + 3) * (n + 4) / 24;
    }
};

int main() {
    auto ans = Solution().countVowelStrings(33);
    cout << toString(ans) << endl;
    return 0;
}
