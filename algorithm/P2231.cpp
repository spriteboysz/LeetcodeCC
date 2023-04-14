/**
 * Author: Deean
 * Date: 2023-04-14 23:00
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool static cmp(const int &a, const int &b) {
        return a > b;
    }

    int largestInteger(int num) {
        vector<int> even, odd;
        string ss = to_string(num);
        for (auto &c: ss) {
            int digit = c - '0';
            if (digit % 2 == 0) {
                even.push_back(digit);
            } else {
                odd.push_back(digit);
            }
        }
        sort(even.begin(), even.end(), cmp);
        sort(odd.begin(), odd.end(), cmp);
        string s = "";
        int pos1 = 0, pos2 = 0;
        for (auto &c: ss) {
            int digit = c - '0';
            if (digit % 2 == 0) {
                s.append(string(1, even[pos1++] + '0'));
            } else {
                s.append(string(1, odd[pos2++] + '0'));
            }
        }
        return stoi(s);
    }
};

int main() {
    auto ans = Solution().largestInteger(1234);
    cout << toString(ans) << endl;
    return 0;
}
