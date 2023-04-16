/**
 * Author: Deean
 * Date: 2023-04-16 15:00
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isCovered(vector <vector<int>> &ranges, int left, int right) {
        int number[51] = {0};
        for (auto range: ranges) {
            for (int i = range[0]; i <= range[1]; ++i) {
                number[i] |= 1;
            }
        }
        for (int i = left; i <= right; ++i) {
            if (number[i] != 1) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    vector <vector<int>> ranges = stringToVector2("[[1,2],[3,4],[5,6]]");
    auto ans = Solution().isCovered(ranges, 2, 5);
    cout << toString(ans) << endl;
    return 0;
}
