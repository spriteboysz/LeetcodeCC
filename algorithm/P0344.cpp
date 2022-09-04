/**
 * Author: Deean
 * Date: 2022-09-04 16:20
 * FileName: algorithm/P0344.cpp
 * Description: 344. 反转字符串
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    void reverseString(vector<char> &s) {
        for (int i = 0; i < s.size() / 2; ++i) {
            char temp = s[i];
            s[i] = s[s.size() - 1 - i];
            s[s.size() - 1 - i] = temp;
        }
        cout << vectorToString(s) << endl;
    }
};

int main() {
    vector<char> s = {'H', 'a', 'n', 'n', 'a', 'h'};
    Solution().reverseString(s);
    return 0;
}