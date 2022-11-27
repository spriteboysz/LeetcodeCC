/**
 * Author: Deean
 * Date: 2022/11/27 22:21
 * FileName: algorithm
 * Description: 
 */

# include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int x1 = x, x2 = 0;
        while(x1 > 0) {
            int mod = x1%10;
            x2 = 10 * x2 + mod;
            x1/=10;
        }
        return x2 == x;
    }
};

int main() {
    int ans = Solution().isPalindrome(121);
    cout << ans << endl;
    return 0;
}