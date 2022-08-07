# include <iostream>

using namespace std;

class Solution {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
};



int main() {
    int ans = Solution().sum(10, 20);
    cout << ans << endl;
    return 0;
}
