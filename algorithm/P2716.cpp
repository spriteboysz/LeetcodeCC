/**
 * Author: Deean
 * Date: 2023-06-22 23:11
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minimizedStringLength(string s) {
        return unordered_set(s.begin(), s.end()).size();
    }
};

int main() {
    auto ans = Solution().minimizedStringLength("aaabc");
    cout << toString(ans) << endl;
    return 0;
}
