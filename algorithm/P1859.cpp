/**
 * Author: Deean
 * Date: 2023-04-16 15:25
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        vector <string> words(9);
        string temp = "";
        int n = 0;
        for (char c: s) {
            if (c >= '0' && c <= '9') {
                words[c - '0' - 1] = temp;
                temp.clear();
                n++;
            } else if (c != ' ') {
                temp.append(1, c);
            }
        }
        string ss = words[0];
        for (int i = 1; i < n; ++i) {
            ss += " " + words[i];
        }
        return ss;
    }
};

int main() {
    auto ans = Solution().sortSentence("is2 sentence4 This1 a3");
    cout << toString(ans) << endl;
    return 0;
}
