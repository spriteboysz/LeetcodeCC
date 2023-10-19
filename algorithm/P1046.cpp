/**
 * Author: Deean
 * Date: 2022-09-10 15:07
 * FileName: algorithm/P1046.cpp
 * Description: 1046. 最后一块石头的重量
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int> &stones) {
        priority_queue<int> queue;
        for (int stone: stones) queue.push(stone);
        while (queue.size() > 1) {
            int a = queue.top();
            queue.pop();
            int b = queue.top();
            queue.pop();
            if (a > b) queue.push(a - b);
        }
        return queue.empty() ? 0 : queue.top();
    }
};

int main() {
    vector<int> stones = {2, 7, 4, 1, 8, 1};
    auto ans = Solution().lastStoneWeight(stones);
    cout << toString(ans) << endl;
    return 0;
}