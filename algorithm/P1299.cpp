/**
 * Author: Deean
 * Date: 2022-09-08 23:23
 * FileName: algorithm/P1299.cpp
 * Description: 1299. 将每个元素替换为右侧最大元素
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int> &arr) {
        vector<int> vec(arr.size(), -1);
        for (int i = arr.size() - 2; i >= 0; --i) {
            vec[i] = max(arr[i + 1], vec[i + 1]);
        }
        return vec;
    }
};

int main() {
    vector<int> arr = {17, 18, 5, 4, 6, 1};
    auto ans = Solution().replaceElements(arr);
    cout << toString(ans) << endl;
    return 0;
}