/**
 * Author: Deean
 * Date: 2022-09-02 22:03
 * FileName: algorithm/P1108.cpp
 * Description: 1108. IP 地址无效化
 */

#include <iostream>

using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string invalid = "";
        for (char c: address) {
            if (c == '.') {
                invalid += "[.]";
            } else {
                invalid += c;
            }
        }
        return invalid;
    }
};

int main() {
    auto ans = Solution().defangIPaddr("255.100.50.0");
    cout << ans << endl;
    return 0;
}