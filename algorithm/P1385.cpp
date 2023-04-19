/**
 * Author: Deean
 * Date: 2023-04-19 21:53
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d) {
        unordered_set<int> visited;
        for (auto num: arr2) {
            for (int i = -d; i <= d; ++i) {
                visited.insert(num + i);
            }
        }
        int cnt = 0;
        for (auto num: arr1) {
            if (visited.count(num) == 0) {
                cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    vector<int> arr1 = {1, 4, 2, 3};
    vector<int> arr2 = {-4, -3, 6, 10, 20, 30};
    auto ans = Solution().findTheDistanceValue(arr1, arr2, 3);
    cout << toString(ans) << endl;
    return 0;
}
