/**
 * Author: Deean
 * Date: 2023-04-19 23:02
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int> &arr) {
        unordered_map<int, int> map;
        for (auto num: arr) {
            map[num]++;
        }
        for (auto num: arr) {
            if (num != 0 && map[num * 2] > 0) {
                return true;
            }
            if (num == 0 && map[num * 2] >= 2) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    vector<int> arr = {10, 2, 5, 3};
    auto ans = Solution().checkIfExist(arr);
    cout << toString(ans) << endl;
    return 0;
}
