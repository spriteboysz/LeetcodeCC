/**
 * Author: Deean
 * Date: 2023-04-16 19:44
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    bool static cmp(const vector<int> &v1, const vector<int> &v2) {
        return v1[1] > v2[1];
    }

    int maximumUnits(vector<vector<int>> &boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), cmp);
        int cnt = 0;
        for (auto &boxType: boxTypes) {
            int numberOfBoxes = boxType[0], numberOfUnitsPerBox = boxType[1];
            if (numberOfBoxes < truckSize) {
                cnt += numberOfBoxes * numberOfUnitsPerBox;
                truckSize -= numberOfBoxes;
            } else {
                cnt += truckSize * numberOfUnitsPerBox;
                break;
            }
        }
        return cnt;
    }
};

int main() {
    vector<vector<int>> boxTypes = stringToVector2("[[1,3],[2,2],[3,1]]");
    auto ans = Solution().maximumUnits(boxTypes, 4);
    cout << toString(ans) << endl;
    return 0;
}
