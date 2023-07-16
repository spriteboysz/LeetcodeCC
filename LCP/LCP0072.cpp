/**
 * Author: Deean
 * Date: 2023-07-15 21:53
 * FileName: LCP
 * Description:LCP 72. 补给马车
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> supplyWagon(vector<int> &supplies) {
        int n = supplies.size();
        while (supplies.size() > (int) n / 2) {
            int index = 1, minimum = supplies[0] + supplies[1];
            for (int i = 1; i < supplies.size(); ++i) {
                if (supplies[i - 1] + supplies[i] < minimum) {
                    minimum = supplies[i - 1] + supplies[i];
                    index = i;
                }
            }
            supplies[index - 1] += supplies[index];
            supplies.erase(supplies.begin() + index);
        }
        return supplies;
    }
};

int main() {
    vector<int> supplies = {7, 3, 6, 1, 8};
    auto ans = Solution().supplyWagon(supplies);
    cout << toString(ans) << endl;
    return 0;
}
