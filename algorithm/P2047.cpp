/**
 * Author: Deean
 * Date: 2023-06-23 18:49
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"
#include <regex>

using namespace std;

class Solution {
public:
    int countValidWords(string sentence) {
        string word;
        regex reg("[a-z]*([a-z]-[a-z])?[a-z]*[!.,]?");
        int cnt = 0;
        istringstream iss(sentence);
        while (iss >> word) {
            if (regex_match(word, reg)) cnt++;
        }
        return cnt;
    }
};

int main() {
    auto ans = Solution().countValidWords("cat and  dog");
    cout << toString(ans) << endl;
    return 0;
}
