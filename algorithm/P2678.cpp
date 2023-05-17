/**
 * Author: Deean
 * Date: 2023-05-16 23:17
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int countSeniors(vector <string> &details) {
        int cnt = 0;
        for (auto detail: details) {
            if (stoi(detail.substr(11, 2)) > 60) {
                cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    vector <string> details = {"7868190130M7522", "5303914400F9211", "9273338290F4010"};
    auto ans = Solution().countSeniors(details);
    cout << toString(ans) << endl;
    return 0;
}
