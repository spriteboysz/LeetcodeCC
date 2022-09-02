/**
 * Author: Deean
 * Date: 2022-09-03 00:16
 * FileName: algorithm/P2037.cpp
 * Description: 2037. 使每位学生都有座位的最少移动次数
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minMovesToSeat(vector<int> &seats, vector<int> &students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int cnt = 0;
        for (int i = 0; i < seats.size(); ++i) {
            cnt += abs(seats[i] - students[i]);
        }
        return cnt;
    }
};

int main() {
    vector<int> seats = {4, 1, 5, 9};
    vector<int> students = {1, 3, 2, 6};
    auto ans = Solution().minMovesToSeat(seats, students);
    cout << ans << endl;
    return 0;
}