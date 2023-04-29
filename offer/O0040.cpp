/**
 * Author: Deean
 * Date: 2023-04-29 14:33
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> getLeastNumbers(vector<int> &arr, int k) {
        sort(arr.begin(), arr.end());
        vector<int> least;
        for (int i = 0; i < k; ++i) {
            least.push_back(arr[i]);
        }
        return least;
    }
};

int main() {
    vector<int> arr = {3, 2, 1};
    auto ans = Solution().getLeastNumbers(arr, 2);
    cout << toString(ans) << endl;
    return 0;
}
