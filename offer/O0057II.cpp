/**
 * Author: Deean
 * Date: 2023-04-29 15:11
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> sequence;
        for (int i = 1, j = 1, sum = 0; i <= target / 2;) {
            if (sum < target) {
                sum += j;
                j++;
            } else if (sum > target) {
                sum -= i;
                i++;
            } else {
                vector<int> res;
                for (int k = i; k < j; ++k) {
                    res.push_back(k);
                }
                sequence.push_back(res);
                sum -= i;
                i++;
            }
        }
        return sequence;
    }
};

int main() {
    auto ans = Solution().findContinuousSequence(15);
    cout << toString(ans) << endl;
    return 0;
}
