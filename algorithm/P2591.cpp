/**
 * Author: Deean
 * Date: 2023-04-09 20:28
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int distMoney(int money, int children) {
        if (money < children) return -1;
        if (money > children * 8) return children - 1;
        if (money == children * 8 - 4) return children - 2;
        return (money - children) / 7;
    }
};

int main() {
    auto ans = Solution().distMoney(20, 3);
    cout << toString(ans) << endl;
    return 0;
}
