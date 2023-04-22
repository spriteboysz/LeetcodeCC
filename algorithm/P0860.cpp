/**
 * Author: Deean
 * Date: 2023-04-22 16:42
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int> &bills) {
        int cnt05 = 0, cnt10 = 0;
        for (auto bill: bills) {
            if (bill == 5) {
                cnt05++;
            } else if (bill == 10) {
                if (cnt05 == 0) {
                    return false;
                }
                cnt10++;
                cnt05--;
            } else {
                if (cnt05 > 0 && cnt10 > 0) {
                    cnt10--;
                    cnt05--;
                } else if (cnt05 >= 3) {
                    cnt05 -= 3;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    vector<int> bills = {5, 5, 5, 10, 20};
    auto ans = Solution().lemonadeChange(bills);
    cout << toString(ans) << endl;
    return 0;
}
