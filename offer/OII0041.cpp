/**
 * Author: Deean
 * Date: 2023-05-12 22:55
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class MovingAverage {
public:
    queue<int> queue;
    int sum = 0, size;

    MovingAverage(int size) {
        this->size = size;
    }

    double next(int val) {
        if (queue.size() == size) {
            sum -= queue.front();
            queue.pop();
        }
        sum += val;
        queue.push(val);
        return sum * 1.0 / queue.size();
    }
};

int main() {
    auto obj = new MovingAverage(3);
    cout << obj->next(1) << endl;
    cout << obj->next(10) << endl;
    cout << obj->next(3) << endl;
    cout << obj->next(5) << endl;
    return 0;
}
