/**
 * Author: Deean
 * Date: 2022-09-07 22:07
 * FileName: algorithm/P0412.cpp
 * Description: 412. Fizz Buzz
 */

#include <leetcode.h>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> vec;
        for (int i = 1; i <= n; ++i) {
            if (i % 3 == 0 && i % 5 == 0) {
                vec.push_back("FizzBuzz");
            } else if (i % 3 == 0) {
                vec.push_back("Fizz");
            } else if (i % 5 == 0) {
                vec.push_back("Buzz");
            } else {
                vec.push_back(to_string(i));
            }
        }
        return vec;
    }
};

int main() {
    auto ans = Solution().fizzBuzz(15);
    cout << toString(ans) << endl;
    return 0;
}