#include <iostream>
#include <vector>
#include <stack>
using namespace std;
#include "algorithm/30-MinStack.h"
#include "algorithm/31-validateStackSequences.h"


int main() {
    vector<int> a{1, 2, 3, 4, 5};
    vector<int> b{4, 5, 3, 2, 1};
    cout << validateStackSequences(a, b) << endl;
    return 0;
}
