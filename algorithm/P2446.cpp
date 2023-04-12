/**
 * Author: Deean
 * Date: 2023-04-12 21:52
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool haveConflict(vector <string> &event1, vector <string> &event2) {
        return event1[0] <= event2[1] && event1[1] >= event2[0];
    }
};

int main() {
    vector <string> event1 = {"01:15", "02:00"}, event2 = {"02:00", "03:00"};
    auto ans = Solution().haveConflict(event1, event2);
    cout << toString(ans) << endl;
    return 0;
}
