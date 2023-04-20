/**
 * Author: Deean
 * Date: 2023-04-19 23:39
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool check(int num) {
        while (num) {
            if (num % 10 == 0) return false;
            num /= 10;
        }
        return true;
    }

    vector<int> getNoZeroIntegers(int n) {
        for (int i = 1; i < n; ++i) {
            if (check(i) && check(n - i)) {
                return vector < int > {i, n - i};
            }
        }
        return vector < int > {-1, -1};
    }
};

int main() {
    auto ans = Solution().getNoZeroIntegers(10003);
    cout << toString(ans) << endl;
    return 0;
}
