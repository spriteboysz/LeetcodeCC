/**
 * Author: Deean
 * Date: 2023-04-12 22:45
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool equalFrequency(string word) {
        int hash[26] = {0};
        for (auto &c: word) {
            hash[c - 'a']++;
        }
        vector<int> counts;
        for (int i = 0; i < 26; ++i) {
            if (hash[i] != 0) {
                counts.push_back(hash[i]);
            }
        }
        sort(counts.begin(), counts.end());
        // cut << toString(counts) <<endl;
        int n = counts.size();
        if (n == 1) return true;
        if (counts[n - 2] + 1 == counts[n - 1] && counts[n - 2] == counts[0]) return true;
        if (counts[0] == 1 && counts[1] == counts[n - 1]) return true;
        return false;
    }
};

int main() {
    auto ans = Solution().equalFrequency("aazz");
    cout << toString(ans) << endl;
    return 0;
}
