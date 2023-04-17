/**
 * Author: Deean
 * Date: 2023-04-17 23:51
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> decrypt(vector<int> &code, int k) {
        int n = code.size();
        vector<int> decode(n);
        if (k == 0) return decode;
        for (int i = 0; i < n; ++i) {
            if (k > 0) {
                for (int j = i + 1; j < i + k + 1; ++j) {
                    decode[i] += code[j % n];
                }
            } else {
                for (int j = i + k; j < i; ++j) {
                    decode[i] += code[(j + n) % n];
                }
            }
        }
        return decode;
    }
};

int main() {
    vector<int> code = {5, 7, 1, 4};
    auto ans = Solution().decrypt(code, 3);
    cout << toString(ans) << endl;
    return 0;
}
