/**
 * Author: Deean
 * Date: 2022-09-07 20:47
 * FileName: algorithm/P2053.cpp
 * Description: 2053. 数组中第 K 个独一无二的字符串
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    string kthDistinct(vector<string> &arr, int k) {
        unordered_map<string, int> map;
        for (auto word: arr) map[word]++;

        string ss = "";
        for (auto word: arr) {
            if (map[word] == 1 && --k == 0) {
                ss = word;
                break;
            }
        }
        return ss;
    }
};

int main() {
    vector<string> arr = {"aaa", "aa", "a"};
    auto ans = Solution().kthDistinct(arr, 1);
    cout << toString(ans) << endl;
    return 0;
}