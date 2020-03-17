//
// Created by 孙卓文 on 2020/3/17.
//

#ifndef LEETCODE_09_CQUEUE_H
#define LEETCODE_09_CQUEUE_H
class CQueue {
public:
    CQueue() {

    }

    void appendTail(int value) {
        st1.push(value);
    }

    int deleteHead() {
        if (!st2.empty()) {
            int ret = st2.top();
            st2.pop();
            return ret;
        }
        else {
            if (st1.empty()) {
                return -1;
            }
            else {
                while (!st1.empty()) {
                    st2.push(st1.top());
                    st1.pop();
                }
                int ret = st2.top();
                st2.pop();
                return ret;
            }
        }
    }
private:
    stack<int> st1;
    stack<int> st2;
};

#endif //LEETCODE_09_CQUEUE_H
