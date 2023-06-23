/**
 * Author: Deean
 * Date: 2023-06-23 16:35
 * FileName: offer
 * Description: 
 */

#include "..\common\leetcode.h"

using namespace std;

class MinStack {
    stack<int> stack1, stack2;
public:
    /** initialize your data structure here. */
    MinStack() {
        stack2.push(INT32_MAX);
    }

    void push(int x) {
        stack1.push(x);
        stack2.push(::min(stack2.top(), x));
    }

    void pop() {
        stack1.pop();
        stack2.pop();
    }

    int top() {
        return stack1.top();
    }

    int min() {
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
    cout << obj->min() << endl;
}
