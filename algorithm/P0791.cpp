/**
 * Author: Deean
 * Date: 2023-05-08 22:58
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> hash;
        for (int i = 0, n = order.size(); i < n; ++i) {
            hash[order[i]] = i;
        }
        sort(s.begin(), s.end(), [&](char c1, char c2) {
            return hash[c1] < hash[c2];
        });
        return s;
    }
};

int main() {
    auto ans = Solution().customSortString("cba", "abcd");
    cout << toString(ans) << endl;
    return 0;
}
