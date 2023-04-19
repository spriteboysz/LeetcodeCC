/**
 * Author: Deean
 * Date: 2023-04-19 22:41
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> sortByBits(vector<int> &arr) {
        unordered_map<int, int> hash;
        for (auto num: arr) {
            int sum = 0, n = num;
            while (n) {
                sum += n & 1;
                n >>= 1;
            }
            hash[num] = sum;
        }
        sort(arr.begin(), arr.end(), [&](int x, int y) {
            if (hash[x] == hash[y]) {
                return x < y;
            } else {
                return hash[x] < hash[y];
            }
        });
        return arr;
    }
};

int main() {
    vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    auto ans = Solution().sortByBits(arr);
    cout << toString(ans) << endl;
    return 0;
}
