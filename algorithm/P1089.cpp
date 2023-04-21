/**
 * Author: Deean
 * Date: 2023-04-21 21:55
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int> &arr) {
        int n = arr.size();
        vector<int> arr2(arr);
        for (int i = 0, j = 0; i < n; ++j) {
            arr2[i++] = arr[j];
            if (arr[j] == 0 && i < n) {
                arr2[i++] = 0;
            }
        }
        for (int i = 0; i < n; ++i) {
            arr[i] = arr2[i];
        }
        cout << toString(arr) << endl;
    }
};

int main() {
    vector<int> arr = {1, 0, 2, 3, 0, 4, 5, 0};
    Solution().duplicateZeros(arr);
    return 0;
}
