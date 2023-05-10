/**
 * Author: Deean
 * Date: 2023-05-10 21:45
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector <vector<int>> sortTheStudents(vector <vector<int>> &score, int k) {
        sort(score.begin(), score.end(), [&](vector<int> v1, vector<int> v2) {
            return v1[k] > v2[k];
        });
        return score;
    }
};

int main() {
    auto score = stringToVector2("[[10,6,9,1],[7,5,11,2],[4,8,3,15]]");
    auto ans = Solution().sortTheStudents(score, 2);
    cout << toString(ans) << endl;
    return 0;
}
