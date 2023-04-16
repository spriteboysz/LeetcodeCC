/**
 * Author: Deean
 * Date: 2023-04-16 22:33
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findKthPositive(vector<int> &arr, int k) {
        int pos, n = arr.size();
        for (pos = 0; pos < n; ++pos) {
            if (arr[pos] - pos - 1 >= k) {
                return k + pos;
            }
        }
        return k + pos;
    }
};

int main() {
    vector<int> arr = {2, 3, 4, 7, 11};
    auto ans = Solution().findKthPositive(arr, 5);
    cout << toString(ans) << endl;
    return 0;
}
