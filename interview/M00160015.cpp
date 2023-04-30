/**
 * Author: Deean
 * Date: 2023-04-30 16:31
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> masterMind(string solution, string guess) {
        int num1 = 0, num2 = 0;
        unordered_map<char, int> hash;
        for (char c: solution) {
            hash[c]++;
        }
        for (int i = 0; i < guess.size(); i++) {
            if (solution[i] == guess[i]) {
                num1++;
            }
            if (hash[guess[i]]) {
                hash[guess[i]]--;
                num2++;
            }
        }
        return {num1, num2 - num1};
    }
};

int main() {
    auto ans = Solution().masterMind("RGBY", "GGRR");
    cout << toString(ans) << endl;
    return 0;
}
