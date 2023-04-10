/**
 * Author: Deean
 * Date: 2023-04-10 23:52
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int similarPairs(vector <string> &words) {
        vector<int> hash;
        for (auto &word: words) {
            int num = 0;
            for (auto &c: word) {
                num |= 1 << (c - 'a');
            }
            hash.push_back(num);
        }
        int cnt = 0;
        for (int i = 0; i < hash.size(); ++i) {
            for (int j = i + 1; j < hash.size(); ++j) {
                if (hash[i] == hash[j]) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

int main() {
    vector <string> words = {"aba", "aabb", "abcd", "bac", "aabc"};
    auto ans = Solution().similarPairs(words);
    cout << toString(ans) << endl;
    return 0;
}
