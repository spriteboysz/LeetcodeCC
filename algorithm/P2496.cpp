/**
 * Author: Deean
 * Date: 2023-04-11 23:01
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int maximumValue(vector<string> &strs) {
        int value = 0;
        for (auto &str: strs) {
            int val = 0;
            for (auto &c: str) {
                if (c >= '0' && c <= '9') {
                    val = val * 10 + c - '0';
                } else {
                    val = str.size();
                    break;
                }
            }
            value = max(value, val);
        }
        return value;
    }
};

int main() {
    vector<string> strs = {"5232","yv","22","c","yawgs","928","4003","2"};
    auto ans = Solution().maximumValue(strs);
    cout << toString(ans) << endl;
    return 0;
}
