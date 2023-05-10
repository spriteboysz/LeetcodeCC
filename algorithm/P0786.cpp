/**
 * Author: Deean
 * Date: 2023-05-10 22:33
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int> &arr, int k) {
        vector <pair<int, int>> fractions;
        for (int i = 0, n = arr.size(); i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                fractions.emplace_back(arr[i], arr[j]);
            }
        }
        sort(fractions.begin(), fractions.end(), [&](pair<int, int> f1, pair<int, int> f2) {
            return f1.first * f2.second < f1.second * f2.first;
        });
        return {fractions[k - 1].first, fractions[k - 1].second};
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 5};
    auto ans = Solution().kthSmallestPrimeFraction(arr, 3);
    cout << toString(ans) << endl;
    return 0;
}
