/**
 * Author: Deean
 * Date: 2023-05-07 16:42
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.size(), n = s2.size();
        if (m > n) return false;
        vector<int> hash(26, 0), hash1(26, 0);
        for (int i = 0; i < m; ++i) {
            hash[s1[i] - 'a']++;
            hash1[s2[i] - 'a']++;
        }
        if (hash == hash1) return true;
        for (int i = m; i < n; ++i) {
            hash1[s2[i] - 'a']++;
            hash1[s2[i - m] - 'a']--;
            if (hash == hash1) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    auto ans = Solution().checkInclusion("ab", "eidbaooo");
    cout << toString(ans) << endl;
    return 0;
}
