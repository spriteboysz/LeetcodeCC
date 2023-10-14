/**
 * Author: Deean
 * Date: 2023-10-11 23:14
 * FileName: LCP
 * Description: LCR 037. 行星碰撞
 */

#include "..\common\leetcode.h"

using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int> &asteroids) {
        vector<int> stack;
        for (auto asteroid: asteroids) {
            bool alive = true;
            while (alive && asteroid < 0 && !stack.empty() && stack.back() > 0) {
                alive = stack.back() < -asteroid;
                if (stack.back() <= -asteroid) {
                    stack.pop_back();
                }
            }
            if (alive) {
                stack.push_back(asteroid);
            }
        }
        return stack;
    }
};

int main() {
    vector<int> asteroids = {5, 10, -5};
    auto ans = Solution().asteroidCollision(asteroids);
    cout << toString(ans) << endl;
    return 0;
}