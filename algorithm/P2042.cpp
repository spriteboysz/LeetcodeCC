/**
 * Author: Deean
 * Date: 2023-04-15 15:59
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool areNumbersAscending(string s) {
        int pre = 0;
        for (int i = 0, n = s.size(); i < n;) {
            if (isdigit(s[i])) {
                int num = 0;
                while (i < n && isdigit(s[i])) {
                    num = num * 10 + s[i] - '0';
                    i++;
                }
                if (num <= pre) {
                    return false;
                }
                pre = num;
            } else {
                i++;
            }
        }
        return true;
    }
};

int main() {
    auto ans = Solution().areNumbersAscending("1 box has 3 blue 4 red 6 green and 12 yellow marbles");
    cout << toString(ans) << endl;
    return 0;
}
