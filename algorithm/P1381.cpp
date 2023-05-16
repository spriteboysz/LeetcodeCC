/**
 * Author: Deean
 * Date: 2023-05-15 23:43
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class CustomStack {
private:
    vector<int> stack;
    int top = 0;
public:
    CustomStack(int maxSize) {
        stack = vector<int>(maxSize);
        top = 0;
    }

    void push(int x) {
        if (stack.size() > top) {
            stack[top++] = x;
        }
    }

    int pop() {
        return top > 0 ? stack[--top] : -1;
    }

    void increment(int k, int val) {
        for (int i = 0; i < k && i < stack.size(); ++i) {
            stack[i] += val;
        }
    }
};

int main() {
    CustomStack *obj = new CustomStack(3);
    obj->push(1);
    obj->push(2);
    cout << obj->pop() << endl;
    obj->push(2);
    obj->push(3);
    obj->push(4);
    obj->increment(5, 100);
    obj->increment(2, 100);
    cout << obj->pop() << endl;
    cout << obj->pop() << endl;
    cout << obj->pop() << endl;
    cout << obj->pop() << endl;
    return 0;
}
