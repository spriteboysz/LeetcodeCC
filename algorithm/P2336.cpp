/**
 * Author: Deean
 * Date: 2023-05-14 12:18
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class SmallestInfiniteSet {
private:
    set<int> nums;
public:
    SmallestInfiniteSet() {
        for (int i = 1; i < 1001; ++i) {
            nums.insert(i);
        }
    }

    int popSmallest() {
        int x = *nums.begin();
        nums.erase(x);
        return x;
    }

    void addBack(int num) {
        nums.insert(num);
    }
};

int main() {
    auto obj = new SmallestInfiniteSet();
    obj->addBack(2);
    cout << obj->popSmallest() << endl;
    return 0;
}
