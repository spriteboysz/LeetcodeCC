/**
 * Author: Deean
 * Date: 2023-10-13 22:47
 * FileName: LCP
 * Description: LCR 125. 图书整理 II
 */

#include "..\common\leetcode.h"

using namespace std;

class CQueue {
public:
    queue<int> queue;

    CQueue() {

    }

    void appendTail(int value) {
        queue.push(value);
    }

    int deleteHead() {
        if (queue.empty()) {
            return -1;
        }
        int val = queue.front();
        queue.pop();
        return val;
    }
};

int main() {
    CQueue *obj = new CQueue();
    obj->appendTail(1);
    obj->appendTail(2);
    cout << obj->deleteHead() << endl;
}