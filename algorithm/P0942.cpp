/**
 * Author: Deean
 * Date: 2022-09-08 23:58
 * FileName: algorithm/P0942.cpp
 * Description: 942. 增减字符串匹配
 */

#include "../common/leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> vec;
        int left = 0, right = s.size();
        for (char c: s) {
            if (c == 'D') vec.push_back(right--);
            if (c == 'I') vec.push_back(left++);
        }
        vec.push_back(left);
        return vec;
    }
};

int main() {
    auto ans = Solution().diStringMatch("DDI");
    cout << toString(ans) << endl;
    return 0;
}