/**
 * Author: Deean
 * Date: 2023-04-16 22:05
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string reformatDate(string date) {
        vector <string> months = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        stringstream ss(date);
        string sy, sm, sd;
        ss >> sd >> sm >> sy;
        int mm = 0;
        for (int i = 0, n = months.size(); i < n; ++i) {
            if (sm == months[i]) mm = i + 1;
        }
        char reformat[7];
        sprintf(reformat, "-%02d-%02d", mm, stoi(sd.substr(0, sd.size() - 2)));
        return sy + reformat;
    }
};

int main() {
    auto ans = Solution().reformatDate("20th Oct 2052");
    cout << toString(ans) << endl;
    return 0;
}
