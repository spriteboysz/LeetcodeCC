/**
 * Author: Deean
 * Date: 2023-10-14 13:45
 * FileName: LCP
 * Description: LCR 159. 库存管理 III
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> inventoryManagement(vector<int> &stock, int cnt) {
        std::sort(stock.begin(), stock.end());
        vector<int> minimum;
        for (int i = 0; i < cnt; ++i) {
            minimum.push_back(stock[i]);
        }
        return minimum;
    }
};

int main() {
    vector<int> stock = {0, 2, 3, 6};
    auto ans = Solution().inventoryManagement(stock, 2);
    cout << toString(ans) << endl;
    return 0;
}