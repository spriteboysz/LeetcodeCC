/**
 * Author: Deean
 * Date: 2022-09-01 23:27
 * FileName: algorithm/P2194.cpp
 * Description: 2194. Excel 表中某个范围内的单元格
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> range;
        for (int col = s[0]; col <= s[3]; ++col) {
            for (int row = s[1]; row <= s[4]; ++row) {
                string cell(1, col);
                cell.push_back(row);
                range.push_back(cell);
            }
        }
        return range;
    }
};

int main() {
    auto ans = Solution().cellsInRange("A1:F1");
    for (string num: ans) cout << num << " ";
    cout << endl;
    return 0;
}