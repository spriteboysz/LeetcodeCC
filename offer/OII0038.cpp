/**
 * Author: Deean
 * Date: 2023-05-15 23:27
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int> &temperatures) {
        int n = temperatures.size();
        vector<int> days(n);
        stack<int> stack;
        for (int i = 0; i < n; ++i) {
            while (!stack.empty() && temperatures[i] > temperatures[stack.top()]) {
                int prev = stack.top();
                days[prev] = i - prev;
                stack.pop();
            }
            stack.push(i);
        }
        return days;
    }
};

int main() {
    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};
    auto ans = Solution().dailyTemperatures(temperatures);
    cout << toString(ans) << endl;
    return 0;
}
