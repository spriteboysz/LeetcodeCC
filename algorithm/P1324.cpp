/**
 * Author: Deean
 * Date: 2023-07-21 22:26
 * FileName: algorithm
 * Description:1324. 竖直打印单词
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <string> printVertically(string s) {
        vector <string> vert(1, string(1, s[0]));
        for (int i = 1, index = 1; i < s.length(); ++i) {
            if (s[i] == ' ') {
                index = 0;
                continue;
            }
            if (index == vert.size()) {
                vert.push_back(string(vert[0].size() - 1, ' '));
            } else if (vert[0].size() - vert[index].size() > 1) {
                vert[index] += string(vert[0].size() - vert[index].size() - 1, ' ');
            }
            vert[index++].push_back(s[i]);
        }
        return vert;
    }
};

int main() {
    auto ans = Solution().printVertically("TO BE OR NOT TO BE");
    cout << toString(ans) << endl;
    return 0;
}
