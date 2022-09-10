/**
 * Author: Deean
 * Date: 2022-09-10 14:07
 * FileName: algorithm/P1200.cpp
 * Description: 1200. 最小绝对差
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int> &arr) {
        sort(arr.begin(), arr.end());
        int minDiff = INT_MAX;
        for (int i = 1; i < arr.size(); ++i) {
            minDiff = min(minDiff, arr[i] - arr[i - 1]);
        }
        vector<vector<int>> vec;
        for (int i = 1; i < arr.size(); ++i) {
            if (minDiff == arr[i] - arr[i - 1]) {
                vec.push_back({arr[i - 1], arr[i]});
            }
        }
        return vec;
    }
};

int main() {
    vector<int> arr = stringToVector("[3,8,-10,23,19,-4,-14,27]");
    auto ans = Solution().minimumAbsDifference(arr);
    cout << toString(ans) << endl;
    return 0;
}