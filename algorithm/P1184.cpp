/**
 * Author: Deean
 * Date: 2023-04-20 23:37
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int distanceBetweenBusStops(vector<int> &distance, int start, int destination) {
        int sum = 0;
        for (auto num: distance) {
            sum += num;
        }
        if (start > destination) {
            int temp = start;
            start = destination;
            destination = temp;
        }
        int acc = 0;
        for (int i = start; i < destination; ++i) {
            acc += distance[i];
        }
        return min(acc, sum - acc);
    }
};

int main() {
    vector<int> distance = {1, 2, 3, 4};
    auto ans = Solution().distanceBetweenBusStops(distance, 0, 1);
    cout << toString(ans) << endl;
    return 0;
}
