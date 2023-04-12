/**
 * Author: Deean
 * Date: 2023-04-12 23:16
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int process(string date) {
        int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int mm = (date[0] - '0') * 10 + date[1] - '0';
        int dd = (date[3] - '0') * 10 + date[4] - '0';
        for (int i = 0; i < mm - 1; ++i) {
            dd += months[i];
        }
        return dd;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int arrive1 = process(arriveAlice), arrive2 = process(arriveBob);
        int leave1 = process(leaveAlice), leave2 = process(leaveBob);
        return max(min(leave1, leave2) - max(arrive1, arrive2) + 1, 0);
    }
};

int main() {
    auto ans = Solution().countDaysTogether("08-15", "08-18", "08-16", "08-19");
    cout << toString(ans) << endl;
    return 0;
}
