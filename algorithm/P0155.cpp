/**
 * Author: Deean
 * Date: 2023-06-23 17:56
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class MinStack {
    stack<int> stack1, stack2;
public:
    MinStack() {
        stack2.push(INT32_MAX);
    }

    void push(int val) {
        stack1.push(val);
        stack2.push(::min(val, stack2.top()));
    }

    void pop() {
        stack1.pop();
        stack2.pop();
    }

    int top() {
        return stack1.top();
    }

    int getMin() {
        return stack2.top();
    }
};

int main() {
    MinStack *obj = new MinStack();
    obj->push(-2);
    obj->push(0);
    obj->push(-3);
    obj->pop();
    cout << obj->top() << endl;
    cout << obj->getMin() << endl;
    return 0;
}
