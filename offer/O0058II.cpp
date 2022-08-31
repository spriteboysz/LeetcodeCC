/**
 * Author: Deean
 * Date: 2022-08-31 23:17
 * FileName: offer/O0058II.cpp
 * Description: 剑指 Offer 58 - II. 左旋转字符串
 */

#include <iostream>

using namespace std;

class Solution {
public:
    string reverseLeftWords(string s, int n) {
        return s.substr(n, s.size()) + s.substr(0, n % s.size());
    }
};

int main() {
    auto ans = Solution().reverseLeftWords("lrloseumgh", 6);
    cout << ans << endl;
    return 0;
}