/**
 * Author: Deean
 * Date: 2023-04-15 19:55
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int hash[26] = {0};
        for (char c: s) {
            hash[c - 'a']++;
        }
        unordered_set<int> set;
        for (int num: hash) {
            if (num > 0) {
                set.insert(num);
            }
        }
        return set.size() == 1;
    }
};

int main() {
    auto ans = Solution().areOccurrencesEqual("abacbc");
    cout << toString(ans) << endl;
    return 0;
}
