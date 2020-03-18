//
// Created by 孙卓文 on 2020/3/18.
//

#ifndef LEETCODE_31_VALIDATESTACKSEQUENCES_H
#define LEETCODE_31_VALIDATESTACKSEQUENCES_H
bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
    stack<int> s;
    int push = 0;
    int pop = 0;
    while (pop < popped.size()) {
        while (s.empty() || (pop < popped.size() && s.top() != popped[pop])) {
            if (push == pushed.size()) break;
            s.push(pushed[push]);
            push++;
        }
        if (s.top() != popped[pop]) break;
        s.pop();
        pop++;
    }
    if (s.empty() && pop == popped.size())
        return true;
    return false;
}
#endif //LEETCODE_31_VALIDATESTACKSEQUENCES_H
