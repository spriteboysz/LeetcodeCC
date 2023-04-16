/**
 * Author: Deean
 * Date: 2023-04-16 19:27
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int n = sequence.size(), m = word.size();
        if (n < m) return 0;
        int maximum = 0;
        string ss = word;
        for (int i = 1; i <= n / m; ++i) {
            if (sequence.find(ss) != string::npos) {
                maximum = i;
            }
            ss += word;
        }
        return maximum;
    }
};

int main() {
    auto ans = Solution().maxRepeating("ababc", "ab");
    cout << toString(ans) << endl;
    return 0;
}
