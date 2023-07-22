/**
 * Author: Deean
 * Date: 2023-07-21 22:19
 * FileName: algorithm
 * Description:1338. 数组大小减半
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int minSetSize(vector<int> &arr) {
        unordered_map<int, int> map;
        for (auto num: arr) {
            if (map[num] > 0) {
                map[num] += 1;
            } else {
                map[num] = 1;
            }
        }
        vector<int> occ;
        for (auto [k, v]: map) {
            occ.push_back(v);
        }
        sort(occ.rbegin(), occ.rend());
        int cnt = 0, ans = 0, n = arr.size();
        for (int c: occ) {
            cnt += c;
            ans += 1;
            if (cnt * 2 >= n) {
                break;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> arr = {3, 3, 3, 3, 5, 5, 5, 2, 2, 7};
    auto ans = Solution().minSetSize(arr);
    cout << toString(ans) << endl;
    return 0;
}
