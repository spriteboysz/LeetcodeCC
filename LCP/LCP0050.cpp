/**
 * Author: Deean
 * Date: 2023-05-01 17:36
 * FileName: LCP
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int giveGem(vector<int> &gem, vector <vector<int>> &operations) {
        for (auto operation: operations) {
            int src = operation[0], dst = operation[1];
            int item = gem[src] / 2;
            gem[src] -= item;
            gem[dst] += item;
        }
        int maximum = gem[0], minimum = gem[0];
        for (auto num: gem) {
            maximum = max(maximum, num);
            minimum = min(minimum, num);
        }
        return maximum - minimum;
    }
};

int main() {
    vector<int> gem = {100, 0, 50, 100};
    auto operations = stringToVector2("[[0,2],[0,1],[3,0],[3,0]]");
    auto ans = Solution().giveGem(gem, operations);
    cout << toString(ans) << endl;
    return 0;
}
