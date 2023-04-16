/**
 * Author: Deean
 * Date: 2023-04-16 16:33
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int secondHighest(string s) {
        int hash[10] = {0};
        for (char c: s) {
            if (isdigit(c)) hash[c - '0']++;
        }
        int max1 = -1;
        for (int i = 9; i >= 0; --i) {
            if (max1 >= 0 && hash[i] > 0) return i;
            if (hash[i] > 0) max1 = i;
        }
        return - 1;
    }
};

int main() {
    auto ans = Solution().secondHighest("dfa12321afd");
    cout << toString(ans) << endl;
    return 0;
}
