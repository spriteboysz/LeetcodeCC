/**
 * Author: Deean
 * Date: 2023-04-22 14:29
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int> &num, int k) {
        vector<int> sum;
        for (int i = num.size() - 1; i >= 0 || k > 0; --i) {
            if (i >= 0) {
                k += num[i];
            }
            sum.push_back(k % 10);
            k /= 10;
        }
        reverse(sum.begin(), sum.end());
        return sum;
    }
};

int main() {
    vector<int> num = {2, 1, 5};
    auto ans = Solution().addToArrayForm(num, 806);
    cout << toString(ans) << endl;
    return 0;
}
