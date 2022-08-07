#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        return {0};
    }
};


int main() {
    vector<int> nums = new vector<int>{ 1,2,3,4,5 };
    int target = 8;
    vector<int> ret = Solution().twoSum(nums, target);
    cout << (ret) << endl;
}