/**
 * Author: Deean
 * Date: 2023-10-14 17:31
 * FileName: LCP
 * Description: LCR 181. 字符串中的单词反转
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string reverseMessage(string message) {
        string res = "", temp;
        stringstream ss(message);
        while (ss >> temp) {
            res = temp + " " + res;
        }
        if (res == "") return res;
        res.pop_back();
        return res;
    }
};

int main() {
    auto ans = Solution().reverseMessage("  hello world!  ");
    cout << toString(ans) << endl;
    return 0;
}