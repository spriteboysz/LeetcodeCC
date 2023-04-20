/**
 * Author: Deean
 * Date: 2023-04-19 23:23
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int> &arr) {
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());
        unordered_map<int, int> ranks;
        for (auto num: sorted) {
            if (!ranks.count(num)) {
                ranks[num] = ranks.size() + 1;
            }
        }
        for (int i = 0; i < arr.size(); ++i) {
            arr[i] = ranks[arr[i]];
        }
        return arr;
    }
};

int main() {
    vector<int> arr = {37, 12, 28, 9, 100, 56, 80, 5, 12};
    auto ans = Solution().arrayRankTransform(arr);
    cout << toString(ans) << endl;
    return 0;
}
