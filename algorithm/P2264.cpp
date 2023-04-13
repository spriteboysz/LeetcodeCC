/**
 * Author: Deean
 * Date: 2023-04-13 23:18
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string largestGoodInteger(string num) {
        for (int i = 9; i >= 0; --i) {
            char temp[4];
            sprintf(temp, "%03d", i * 111);
            if (num.find(temp) != -1) {
                return temp;
            }
        }
        return "";
    }
};

int main() {
    auto ans = Solution().largestGoodInteger("6777133339");
    cout << toString(ans) << endl;
    return 0;
}
