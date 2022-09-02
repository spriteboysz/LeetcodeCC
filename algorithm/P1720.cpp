/**
 * Author: Deean
 * Date: 2022-09-02 21:52
 * FileName: algorithm/P1720.cpp
 * Description: 1720. 解码异或后的数组
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> decode(vector<int> &encoded, int first) {
        vector<int> decoded;
        decoded.push_back(first);
        for (int i = 0; i < encoded.size(); ++i) {
            decoded.push_back(encoded[i] ^ decoded[i]);
        }
        return decoded;
    }
};

int main() {
    vector<int> encoded = {6, 2, 7, 3};
    auto ans = Solution().decode(encoded, 4);
    for (int num: ans) cout << num << " ";
    cout << endl;
    return 0;
}