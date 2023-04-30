/**
 * Author: Deean
 * Date: 2023-04-30 21:37
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int convertInteger(int A, int B) {
        int sum = 0;
        unsigned c = A ^ B;
        while (c) {
            c &= (c - 1);
            sum++;
        }
        return sum;
    }
};

int main() {
    auto ans = Solution().convertInteger(29, 15);
    cout << toString(ans) << endl;
    return 0;
}
