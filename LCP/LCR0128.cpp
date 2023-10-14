/**
 * Author: Deean
 * Date: 2023-10-13 22:56
 * FileName: LCP
 * Description: LCR 128. 库存管理 I
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int stockManagement(vector<int> &stock) {
        return *std::min_element(stock.begin(), stock.end());
    }
};

int main() {
    vector<int> stock = {4, 5, 8, 3, 4};
    auto ans = Solution().stockManagement(stock);
    cout << toString(ans) << endl;
    return 0;
}