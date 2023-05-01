/**
 * Author: Deean
 * Date: 2023-05-01 17:11
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string res = "", temp;
        stringstream ss(s);
        while (ss >> temp) {
            res = temp + " " + res;
        }
        res.pop_back();
        return res;
    }
};

int main() {
    auto ans = Solution().reverseWords("  hello world!  ");
    cout << toString(ans) << endl;
    return 0;
}
