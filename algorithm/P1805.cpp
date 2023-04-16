/**
 * Author: Deean
 * Date: 2023-04-16 15:57
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int numDifferentIntegers(string word) {
        unordered_set <string> nums;
        for (int i = 0, n = word.size(); i <= n; ++i) {
            if (isdigit(word[i])) {
                int j = i;
                while (j < n && isdigit(word[j])) {
                    j++;
                }
                while (i < j && word[i] == '0') {
                    i++;
                }
                nums.insert(word.substr(i, j - i));
                i = j;
            }
        }
        return nums.size();
    }
};

int main() {
    auto ans = Solution().numDifferentIntegers("leet1234code234");
    cout << toString(ans) << endl;
    return 0;
}
