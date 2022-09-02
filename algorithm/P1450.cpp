/**
 * Author: Deean
 * Date: 2022-09-02 23:34
 * FileName: algorithm/P1450.cpp
 * Description: 1450. 在既定时间做作业的学生人数
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int busyStudent(vector<int> &startTime, vector<int> &endTime, int queryTime) {
        int count = 0;
        for (int i = 0; i < startTime.size(); ++i) {
            if (queryTime >= startTime[i] && queryTime <= endTime[i]) count++;
        }
        return count;
    }
};

int main() {
    vector<int> startTime = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> endTime = {10, 10, 10, 10, 10, 10, 10, 10, 10};
    auto ans = Solution().busyStudent(startTime, endTime, 5);
    cout << ans << endl;
    return 0;
}