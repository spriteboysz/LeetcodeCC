/**
 * Author: Deean
 * Date: 2023-05-07 22:17
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> nums;
        for (int i = 0; i < n; ++i) {
            nums.push_back(i + 1);
        }
        sort(nums.begin(), nums.end(), [&](const int a, const int b) {
            return to_string(a) < to_string(b);
        });
        return nums;
    }
};

int main() {
    auto ans = Solution().lexicalOrder(13);
    cout << toString(ans) << endl;
    return 0;
}
