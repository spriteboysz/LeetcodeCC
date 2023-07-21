/**
 * Author: Deean
 * Date: 2023-07-20 23:47
 * FileName: algorithm
 * Description:1387. 将整数按权重排序
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    unordered_map<int, int> map;

    int getF(int x) {
        if (map.find(x) != map.end()) return map[x];
        if (x == 1) return map[x] == 0;
        return x & 1 ? map[x] = getF(x * 3 + 1) + 1 : map[x] = getF(x / 2) + 1;
    }

    int getKth(int lo, int hi, int k) {
        vector<int> nums;
        for (int i = lo; i <= hi; ++i) {
            nums.push_back(i);
        }
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            return getF(a) == getF(b) ? a < b : getF(a) < getF(b);
        });
        return nums[k - 1];
    }
};

int main() {
    auto ans = Solution().getKth(12, 15, 2);
    cout << toString(ans) << endl;
    return 0;
}
