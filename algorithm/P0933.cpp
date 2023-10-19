/**
 * Author: Deean
 * Date: 2022-09-02 23:46
 * FileName: algorithm/P0933.cpp
 * Description: 933. 最近的请求次数
 */

#include "../common/leetcode.h"


using namespace std;

class RecentCounter {
private:
    queue<int> queue;
public:
    RecentCounter() {}

    int ping(int t) {
        queue.push(t);
        while (queue.front() < t - 3000) queue.pop();
        int x = queue.pop();
        return x;
    }
};

int main() {
    RecentCounter recentCounter = RecentCounter();
    cout << recentCounter.ping(1) << endl;   // requests = [1]，范围是 [-2999,1]，返回 1
    cout << recentCounter.ping(100) << endl;   // requests = [1, 100]，范围是 [-2900,100]，返回 2
    cout << recentCounter.ping(3001) << endl;  // requests = [1, 100, 3001]，范围是 [1,3001]，返回 3
    cout << recentCounter.ping(3002) << endl;  // requests = [1, 100, 3001, 3002]，范围是 [2,3002]，返回 3
    return 0;
}