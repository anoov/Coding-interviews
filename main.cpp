#include <iostream>
#include <vector>
#include "03-findRepeatNumber.h"
#include "11-minArray.h"
using namespace std;

int main() {
    vector<int> a{1, 3, 3, 2, 1};
    cout << findRepeatNumber(a) << endl;
    return 0;
}
