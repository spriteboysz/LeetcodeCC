/**
 * Author: Deean
 * Date: 2023-04-15 14:48
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    string capitalizeTitle(string title) {
        for (int i = 0, k = 0, n = title.size(); i <= n; ++i) {
            if (title[i] == ' ' || title[i] == '\0') {
                if ((i - k) > 2) {
                    title[k] = toupper(title[k]);
                }
                k = i + 1;
            } else {
                title[i] = tolower(title[i]);
            }
        }
        return title;
    }
};

int main() {
    auto ans = Solution().capitalizeTitle("capiTalIze tHe titLe");
    cout << toString(ans) << endl;
    return 0;
}
