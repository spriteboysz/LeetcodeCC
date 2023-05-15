/**
 * Author: Deean
 * Date: 2023-05-15 22:50
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int getLastMoment(int n, vector<int> &left, vector<int> &right) {
        int maximum = 0;
        for (auto pos: left) {
            maximum = max(maximum, pos);
        }
        for (auto pos: right) {
            maximum = max(maximum, n - pos);
        }
        return maximum;
    }
};

int main() {
    vector<int> left = {4, 3}, right = {0, 1};
    auto ans = Solution().getLastMoment(4, left, right);
    cout << toString(ans) << endl;
    return 0;
}
