/**
 * Author: Deean
 * Date: 2023-04-24 22:44
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        return count(s.begin(), s.end(), 'A') < 2 && s.find("LLL") == string::npos;
    }
};

int main() {
    auto ans = Solution().checkRecord("PPALLP");
    cout << toString(ans) << endl;
    return 0;
}
