/**
 * Author: Deean
 * Date: 2023-05-07 17:11
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <string> permutation(string s) {
        sort(s.begin(), s.end());
        vector <string> ret;
        do {
            ret.push_back(s);
        } while (next_permutation(s.begin(), s.end()));
        return ret;
    }
};

int main() {
    auto ans = Solution().permutation("bac");
    cout << toString(ans) << endl;
    return 0;
}
