/**
 * Author: Deean
 * Date: 2023-04-14 22:27
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string bestHand(vector<int> &ranks, vector<char> &suits) {
        unordered_set<char> set;
        for (auto &suit: suits) {
            set.emplace(suit);
        }
        if (set.size() == 1) return "Flush";

        unordered_map<int, int> map;
        for (auto &rank: ranks) {
            map[rank]++;
        }
        if (map.size() == 5) return "High Card";
        for (auto [_, v]: map) {
            if (v > 2) return "Three of a Kind";
        }
        return "Pair";
    }
};

int main() {
    vector<int> ranks = {13, 2, 3, 1, 9};
    vector<char> suits = {'a', 'a', 'a', 'a', 'a'};
    auto ans = Solution().bestHand(ranks, suits);
    cout << toString(ans) << endl;
    return 0;
}
