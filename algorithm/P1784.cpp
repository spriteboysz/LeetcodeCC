/**
 * Author: Deean
 * Date: 2023-04-16 16:45
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool checkOnesSegment(string s) {
        return s.find("01") == string::npos;
    }
};

int main() {
    auto ans = Solution().checkOnesSegment("1001");
    cout << toString(ans) << endl;
    return 0;
}
