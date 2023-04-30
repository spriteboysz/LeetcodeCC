/**
 * Author: Deean
 * Date: 2023-04-30 16:38
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maximum(int a, int b) {
        return max(a, b);
    }
};

int main() {
    auto ans = Solution().maximum(1, 2);
    cout << toString(ans) << endl;
    return 0;
}
