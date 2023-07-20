/**
 * Author: Deean
 * Date: 2023-07-19 22:25
 * FileName: algorithm
 * Description:1807. 替换字符串中的括号内容
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string evaluate(string s, vector <vector<string>> &knowledge) {
        unordered_map <string, string> map;
        for (auto el: knowledge) {
            map[el[0]] = el[1];
        }
        string ss;
        for (int i = 0, n = s.size(); i < n; ++i) {
            if (s[i] == '(') {
                int j = s.find(")", i + 1);
                auto sub = s.substr(i + 1, j - i - 1);
                ss += map.count(sub) ? map[sub] : "?";
                i = j;
            } else {
                ss += s[i];
            }
        }
        return ss;
    }
};

int main() {
    vector <vector<string>> knowledge = {{"name", "bob"},
                                         {"age",  "two"}};
    auto ans = Solution().evaluate("(name)is(age)years old", knowledge);
    cout << toString(ans) << endl;
    return 0;
}
