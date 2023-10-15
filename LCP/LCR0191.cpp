/**
 * Author: Deean
 * Date: 2023-10-14 19:43
 * FileName: LCP
 * Description: LCR 191. 按规则计算统计结果
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> statisticalResult(vector<int> &arrayA) {
        vector<int> arrayB;
        unordered_map<int, int> map;
        for (const auto &num: arrayA) {
            map[num]++;
        }
        if (map[0] > 1) {
            arrayB.resize(arrayA.size());
        } else {
            int product = 1;
            for (const auto &num: arrayA) {
                if (num != 0) {
                    product *= num;
                }
            }
            if (map[0] == 1) {
                for (const auto &num: arrayA) {
                    if (num == 0) {
                        arrayB.push_back(product);
                    } else {
                        arrayB.push_back(0);
                    }
                }
            } else {
                for (const auto &num: arrayA) {
                    arrayB.push_back(product / num);
                }
            }
        }
        return arrayB;
    }
};

int main() {
    vector<int> arrayA = {2, 4, 6, 8, 10};
    auto ans = Solution().statisticalResult(arrayA);
    cout << toString(ans) << endl;
    arrayA = {0, 0, 1, 2, 3, 4, 5};
    cout << toString(Solution().statisticalResult(arrayA)) << endl;
    return 0;
}