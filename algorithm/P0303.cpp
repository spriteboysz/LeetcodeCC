/**
 * Author: Deean
 * Date: 2023-04-27 23:14
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class NumArray {
public:
    vector<int> acc;

    NumArray(vector<int> &nums) {
        acc.resize(nums.size() + 1);
        for (int i = 0, n = nums.size(); i < n; ++i) {
            acc[i + 1] = acc[i] + nums[i];
        }
    }

    int sumRange(int left, int right) {
        return acc[right + 1] - acc[left];
    }
};

int main() {
    vector<int> nums = {-2, 0, 3, -5, 2, -1};
    NumArray *obj = new NumArray(nums);
    cout << obj->sumRange(0, 2) << endl;
    cout << obj->sumRange(2, 5) << endl;
    cout << obj->sumRange(0, 5) << endl;
    return 0;
}
