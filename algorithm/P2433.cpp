/**
 * Author: Deean
 * Date: 2023-05-12 21:23
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> findArray(vector<int> &pref) {
        vector<int> nums = {pref[0]};
        for (int i = 1, n = pref.size(); i < n; ++i) {
            nums.push_back(pref[i] ^ pref[i - 1]);
        }
        return nums;
    }
};

int main() {
    vector<int> pref = {5, 2, 0, 3, 1};
    auto ans = Solution().findArray(pref);
    cout << toString(ans) << endl;
    return 0;
}
