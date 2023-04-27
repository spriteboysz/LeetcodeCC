/**
 * Author: Deean
 * Date: 2023-04-26 22:51
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";
        char map[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
        string ss = "";
        while (num != 0 && ss.size() < 8) {
            ss = map[num & 0xf] + ss;
            num >>= 4;
        }
        return ss;
    }
};

int main() {
    auto ans = Solution().toHex(26);
    cout << toString(ans) << endl;
    return 0;
}
