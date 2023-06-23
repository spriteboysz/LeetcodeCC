/**
 * Author: Deean
 * Date: 2023-06-23 16:11
 * FileName: interview
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    int findString(vector <string> &words, string s) {
        int left = 0, right = words.size() - 1;
        while (left <= right) {
            if (words[left].size() == 0) {
                left++;
                continue;
            }
            if (words[right].size() == 0) {
                right--;
                continue;
            }
            int mid = (left + right) / 2;
            while (words[mid].size() == 0) {
                mid++;
                if (mid == right) {
                    right = (left + right) / 2;
                    continue;
                }
            }
            if (words[mid] > s) {
                right = mid - 1;
            } else if (words[mid] < s) {
                left = mid + 1;
            } else {
                return mid;
            }
        }
        return -1;
    }
};

int main() {
    vector <string> words = {"at", "", "", "", "ball", "", "", "car", "", "", "dad", "", ""};
    auto ans = Solution().findString(words, "ta");
    cout << toString(ans) << endl;
    return 0;
}
