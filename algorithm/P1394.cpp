/**
 * Author: Deean
 * Date: 2022-09-10 15:18
 * FileName: algorithm/P1394.cpp
 * Description: 1394. 找出数组中的幸运数
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    int findLucky(vector<int> &arr) {
        map<int, int> map;
        for (auto num: arr) map[num]++;
        int lucky = -1;
        for (auto pair: map) {
            if (pair.first == pair.second) lucky = pair.first;
        }
        return lucky;
    }
};

int main() {
    vector<int> arr = stringToVector("[1,2,2,3,3,3]");
    auto ans = Solution().findLucky(arr);
    cout << toString(ans) << endl;
    return 0;
}