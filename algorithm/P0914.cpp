/**
 * Author: Deean
 * Date: 2023-04-22 15:23
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool hasGroupsSizeX(vector<int> &deck) {
        unordered_map<int, int> hash;
        for (auto num: deck) {
            hash[num]++;
        }
        for (int i = 2, n = deck.size(); i <= n; ++i) {
            if (n % i != 0) continue;
            bool flag = true;
            for (auto [k, v]: hash) {
                if (v % i != 0) {
                    flag = false;
                    break;
                }
            }
            if (flag) return true;
        }
        return false;
    }
};

int main() {
    vector<int> deck = {1, 2, 3, 4, 4, 3, 2, 1};
    auto ans = Solution().hasGroupsSizeX(deck);
    cout << toString(ans) << endl;
    return 0;
}
