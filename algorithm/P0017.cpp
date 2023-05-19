/**
 * Author: Deean
 * Date: 2023-05-18 23:03
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <string> paths;
    string path;
    unordered_map<char, string> map{
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
    };

    void backtrace(string digits, int pos) {
        if (pos == digits.size()) {
            paths.push_back(path);
            return;
        }
        const string &letters = map[digits[pos]];
        for (auto letter: letters) {
            path.push_back(letter);
            backtrace(digits, pos + 1);
            path.pop_back();
        }
    }

    vector <string> letterCombinations(string digits) {
        paths.clear();
        path.clear();
        if (digits.empty()) return paths;
        backtrace(digits, 0);
        return paths;
    }
};

int main() {
    auto ans = Solution().letterCombinations("23");
    cout << toString(ans) << endl;
    return 0;
}
