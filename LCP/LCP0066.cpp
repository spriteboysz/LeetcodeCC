/**
 * Author: Deean
 * Date: 2023-05-01 17:29
 * FileName: LCP
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minNumBooths(vector <string> &demand) {
        vector<int> hash(26, 0);
        for (auto word: demand) {
            vector<int> hash1(26, 0);
            for (auto c: word) {
                hash1[c - 'a']++;
            }
            for (int i = 0; i < 26; ++i) {
                hash[i] = max(hash[i], hash1[i]);
            }
        }
        int sum = 0;
        for (int i = 0; i < 26; ++i) {
            sum += hash[i];
        }
        return sum;
    }
};

int main() {
    vector <string> demand = {"acd", "bed", "accd"};
    auto ans = Solution().minNumBooths(demand);
    cout << toString(ans) << endl;
    return 0;
}
