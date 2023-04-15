/**
 * Author: Deean
 * Date: 2023-04-15 15:09
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> findEvenNumbers(vector<int> &digits) {
        int hash[10] = {0};
        for (auto digit: digits) {
            hash[digit]++;
        }
        vector<int> even;
        for (int i = 100; i < 1000; i += 2) {
            int a = i / 100, b = (i % 100) / 10, c = i % 10;
            int hash2[10] = {0};
            for (auto digit: {a, b, c}) {
                hash2[digit]++;
            }
            bool flag = true;
            for (int j = 0; j < 10; ++j) {
                if (hash2[j] > 0 && hash2[j] > hash[j]) {
                    flag = false;
                    break;
                }
            }
            if (flag) even.push_back(i);
        }
        return even;
    }
};

int main() {
    vector<int> digits = {2, 1, 3, 0};
    auto ans = Solution().findEvenNumbers(digits);
    cout << toString(ans) << endl;
    return 0;
}
