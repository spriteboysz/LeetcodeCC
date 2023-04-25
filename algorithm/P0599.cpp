/**
 * Author: Deean
 * Date: 2023-04-24 23:24
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<string> findRestaurant(vector<string> &list1, vector<string> &list2) {
        unordered_map<string, int> hash1, hash2;
        for (int i = 0, n = list1.size(); i < n; ++i) {
            hash1[list1[i]] = i;
        }
        for (int i = 0, n = list2.size(); i < n; ++i) {
            hash2[list2[i]] = i;
        }
        unordered_map<string, int> common;
        int minimum = list1.size() + list2.size();
        for (auto rest: list1) {
            if (hash1.count(rest) && hash2.count(rest)) {
                common[rest] = hash1[rest] + hash2[rest];
                minimum = min(minimum, common[rest]);
            }
        }
        vector<string> favorite;
        for (auto rest: list1) {
            if (common.count(rest) && common[rest] == minimum) {
                favorite.push_back(rest);
            }
        }
        return favorite;
    }
};

int main() {
    vector<string> list1 = {"Shogun", "Tapioca Express", "Burger King", "KFC"};
    vector<string> list2 = {"Piatti", "The Grill at Torrey Pines", "Hungry Hunter Steakhouse", "Shogun"};
    auto ans = Solution().findRestaurant(list1, list2);
    cout << toString(ans) << endl;
    return 0;
}
