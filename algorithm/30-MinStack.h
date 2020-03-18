//
// Created by 孙卓文 on 2020/3/18.
//

#ifndef LEETCODE_30_MINSTACK_H
#define LEETCODE_30_MINSTACK_H
class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {

    }

    void push(int x) {
        s.push(x);
        if (min_s.empty())
            min_s.push(x);
        else {
            if (x < min_s.top())
                min_s.push(x);
            else
                min_s.push(min_s.top());
        }
    }

    void pop() {
        s.pop();
        min_s.pop();
    }

    int top() {
        return s.top();
    }

    int min() {
        return min_s.top();
    }
private:
    stack<int> s;
    stack<int> min_s;
};
#endif //LEETCODE_30_MINSTACK_H
