/**
 * Author: Deean
 * Date: 2023-05-13 22:08
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int left = boxes[0] - '0', right = 0, operations = 0;
        for (int i = 1, n = boxes.size(); i < n; ++i) {
            if (boxes[i] == '1') {
                right++;
                operations += i;
            }
        }
        vector<int> ret(boxes.size());
        ret[0] = operations;
        for (int i = 1, n = boxes.size(); i < n; ++i) {
            operations += left - right;
            if (boxes[i] == '1') {
                left++;
                right--;
            }
            ret[i] = operations;
        }
        return ret;
    }
};

int main() {
    auto ans = Solution().minOperations("110");
    cout << toString(ans) << endl;
    return 0;
}
