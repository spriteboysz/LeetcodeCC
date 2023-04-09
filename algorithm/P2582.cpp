/**
 * Author: Deean
 * Date: 2023-04-09 21:50
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int passThePillow(int n, int time) {
        int pos = 1;
        for (int i = 0, flag = 1; i < time; ++i) {
            if (flag == 1) pos++;
            if (flag == -1) pos--;
            if (pos == n || pos == 1) flag *= -1;
        }
        return pos;
    }
};

int main() {
    auto ans = Solution().passThePillow(4, 5);
    cout << toString(ans) << endl;
    return 0;
}
