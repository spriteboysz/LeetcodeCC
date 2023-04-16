/**
 * Author: Deean
 * Date: 2023-04-16 21:50
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    double average(vector<int> &salary) {
        int maximum = salary[0], minimum = salary[0], sum = 0;
        for (auto num: salary) {
            maximum = max(maximum, num);
            minimum = min(minimum, num);
            sum += num;
        }
        return (sum - maximum - minimum) * 1.0 / (salary.size() - 2);
    }
};

int main() {
    vector<int> salary = {4000, 3000, 1000, 2000};
    auto ans = Solution().average(salary);
    cout << toString(ans) << endl;
    return 0;
}
