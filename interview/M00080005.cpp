/**
 * Author: Deean
 * Date: 2023-05-16 22:59
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int multiply(int A, int B) {
        int b = max(A, B), sum = 0;
        for (int a = min(A, B); a > 0; a--) {
            sum += b;
        }
        return sum;
    }
};

int main() {
    auto ans = Solution().multiply(3, 4);
    cout << toString(ans) << endl;
    return 0;
}
