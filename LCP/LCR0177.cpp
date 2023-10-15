/**
 * Author: Deean
 * Date: 2023-10-14 17:18
 * FileName: LCP
 * Description: LCR 177. 撞色搭配
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> sockCollocation(vector<int> &sockets) {
        unordered_map<int, int> map;
        for (const auto &socket: sockets) {
            map[socket]++;
        }
        vector<int> single;
        for (const auto &pair: map) {
            if (pair.second == 1) {
                single.push_back(pair.first);
            }
        }
        return single;
    }
};

int main() {
    vector<int> sockets = {4, 5, 2, 4, 6, 6};
    auto ans = Solution().sockCollocation(sockets);
    cout << toString(ans) << endl;
    return 0;
}