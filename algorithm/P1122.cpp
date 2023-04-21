/**
 * Author: Deean
 * Date: 2023-04-21 21:35
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2) {
        unordered_map<int, int> hash;
        for (int i = 0, n = arr2.size(); i < n; ++i) {
            hash[arr2[i]] = i;
        }
        for (auto num: arr1) {
            if (hash.count(num) == 0) {
                hash[num] = 1001;
            }
        }
        sort(arr1.begin(), arr1.end(), [&](int a, int b) {
            if (hash[a] == hash[b]) {
                return a < b;
            } else {
                return hash[a] < hash[b];
            }
        });
        return arr1;
    }
};

int main() {
    vector<int> arr1 = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19};
    vector<int> arr2 = {2, 1, 4, 3, 9, 6};
    auto ans = Solution().relativeSortArray(arr1, arr2);
    cout << toString(ans) << endl;
    return 0;
}
