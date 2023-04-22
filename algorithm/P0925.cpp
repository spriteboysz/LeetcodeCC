/**
 * Author: Deean
 * Date: 2023-04-22 15:04
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int pos1 = 0, pos2 = 0;
        while (pos2 < typed.size()) {
            if (pos1 < name.size() && name[pos1] == typed[pos2]) {
                pos1++;
                pos2++;
            } else if (pos2 > 0 && typed[pos2 - 1] == typed[pos2]) {
                pos2++;
            } else {
                return false;
            }
        }
        return pos1 == name.size();
    }
};

int main() {
    auto ans = Solution().isLongPressedName("alex", "aaleex");
    cout << toString(ans) << endl;
    return 0;
}
