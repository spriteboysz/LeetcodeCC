/**
 * Author: Deean
 * Date: 2023-04-11 23:35
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        return vector <double> {celsius + 273.15, celsius * 1.8 + 32.0};
    }
};

int main() {
    auto ans = Solution().convertTemperature(36.50);
    cout << toString(ans) << endl;
    return 0;
}
