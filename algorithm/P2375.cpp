/**
 * Author: Deean
 * Date: 2023-05-14 19:30
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string smallestNumber(string pattern) {
        int n = pattern.size();
        string ss;
        for (int i = 1; i <= n + 1; i++) {
            ss.push_back(i + '0');
        }
        for (int i = 0, j = 0; i < n;) {
            while (j < n && pattern[j] == pattern[i]){
                j++;
            }
            if (pattern[i] == 'D') {
                reverse(ss.begin() + i, ss.begin() + j + 1);
            }
            i = j;
        }
        return ss;
    }
};

int main() {
    auto ans = Solution().smallestNumber("IIIDIDDD");
    cout << toString(ans) << endl;
    return 0;
}
