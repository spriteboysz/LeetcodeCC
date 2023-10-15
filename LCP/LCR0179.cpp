/**
 * Author: Deean
 * Date: 2023-10-14 17:26
 * FileName: LCP
 * Description: LCR 179. 查找总价格为目标值的两个商品
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &price, int target) {
        int left = 0, right = price.size() - 1;
        while (left < right) {
            int price1 = price[left], price2 = price[right];
            if (price1 + price2 < target) {
                left++;
            } else if (price1 + price2 > target) {
                right--;
            } else {
                return {price1, price2};
            }
        }
        return {-1, -1};
    }
};

int main() {
    vector<int> price = {8, 21, 27, 34, 52, 66};
    auto ans = Solution().twoSum(price, 61);
    cout << toString(ans) << endl;
    return 0;
}