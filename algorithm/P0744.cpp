/**
 * Author: Deean
 * Date: 2023-04-22 22:08
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for (auto letter: letters) {
            if (letter > target) {
                return letter;
            }
        }
        return letters[0];
    }
};

int main() {
    vector<char> letters = {'x', 'x', 'y', 'y'};
    auto ans = Solution().nextGreatestLetter(letters, 'z');
    cout << toString(ans) << endl;
    return 0;
}
