/**
 * Author: Deean
 * Date: 2023-04-17 22:58
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int> hash(26, -1);
        int maximum = -1;
        for (int i = 0, n = s.size(); i < n; ++i) {
            int index = s[i] - 'a';
            if (hash[index] == -1) {
                hash[index] = i;
            } else {
                maximum = max(maximum, i - hash[index] - 1);
            }
        }
        return maximum;
    }
};

int main() {
    auto ans = Solution().maxLengthBetweenEqualCharacters("abca");
    cout << toString(ans) << endl;
    return 0;
}
