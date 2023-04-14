/**
 * Author: Deean
 * Date: 2023-04-14 21:34
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    double calculateTax(vector <vector<int>> &brackets, int income) {
        int tax = 0, base = 0;
        for (auto &bracket: brackets) {
            int upper = bracket[0], percent = bracket[1];
            if (income >= upper) {
                tax += (upper - base) * percent;
                base = upper;
            } else {
                tax += (income - base) * percent;
                break;
            }
        }
        return tax * 1.0 / 100;
    }
};

int main() {
    vector <vector<int>> brackets = stringToVector2("[[3,50],[7,10],[12,25]]");
    auto ans = Solution().calculateTax(brackets, 10);
    cout << toString(ans) << endl;
    return 0;
}
