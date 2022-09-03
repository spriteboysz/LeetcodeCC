/**
 * Author: Deean
 * Date: 2022-09-03 11:01
 * FileName: algorithm/P2325.cpp
 * Description: 2325. 解密消息
 */

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> map;
        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        int index = 0;
        for (char c: key) {
            if (map.count(c) == 0 && c >= 'a' && c <= 'z') {
                map[c] = alphabet[index++];
            }
        }
        string decode = "";
        for (char c: message) {
            if (c >= 'a' && c <= 'z') {
                decode += map[c];
            } else {
                decode += c;
            }
        }
        return decode;
    }
};

int main() {
    auto ans = Solution().decodeMessage("eljuxhpwnyrdgtqkviszcfmabo", "zwx hnfx lqantp mnoeius ycgk vcnjrdb");
    cout << ans << endl;
    return 0;
}