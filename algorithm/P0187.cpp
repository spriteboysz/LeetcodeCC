/**
 * Author: Deean
 * Date: 2023-05-07 16:25
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int> hash;
        for (int i = 0, n = s.size(); i + 10 <= n; ++i) {
            hash[s.substr(i, 10)]++;
        }
        vector <string> repeated;
        for (auto [k, v]: hash) {
            if (v >= 2) {
                repeated.push_back(k);
            }
        }
        return repeated;
    }
};

int main() {
    auto ans = Solution().findRepeatedDnaSequences("AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT");
    cout << toString(ans) << endl;
    return 0;
}
