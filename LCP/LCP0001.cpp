/**
 * Author: Deean
 * Date: 2022-09-02 00:03
 * FileName: LCP/LCP0001.cpp
 * Description: LCP 01. 猜数字
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int game(vector<int>& guess, vector<int>& answer) {
        int count = 0;
        for (int i = 0; i < guess.size(); ++i) {
            if (guess[i] == answer[i]) count++;
        }
        return count;
    }
};

int main() {
    vector<int> guess = {2,2,3};
    vector<int> answer = {3,2,1};
    auto ans = Solution().game(guess, answer);
    cout << ans << endl;
    return 0;
}