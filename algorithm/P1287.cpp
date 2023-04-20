/**
 * Author: Deean
 * Date: 2023-04-19 23:46
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findSpecialInteger(vector<int> &arr) {
        unordered_map<int, int> hash;
        int n = arr.size();
        for (auto num: arr) {
            hash[num]++;
            if (hash[num] > n * 0.25) {
                return num;
            }
        }
        return -1;
    }
};

int main() {
    vector<int> arr = {1, 2, 2, 6, 6, 6, 6, 7, 10};
    auto ans = Solution().findSpecialInteger(arr);
    cout << toString(ans) << endl;
    return 0;
}
