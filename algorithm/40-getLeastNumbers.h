//
// Created by 孙卓文 on 2020/3/20.
//

#ifndef LEETCODE_40_GETLEASTNUMBERS_H
#define LEETCODE_40_GETLEASTNUMBERS_H
vector<int> getLeastNumbers(vector<int>& arr, int k) {
    multiset<int, greater<int>> tmp_set;
    for (int i = 0; i < k; i++) {
        tmp_set.insert(arr[i]);
    }
    for (int i = k; i < arr.size(); ++i) {
        if (*(tmp_set.begin()) > arr[i]) {
            tmp_set.erase(tmp_set.begin());
            tmp_set.insert(arr[i]);
        }
    }
    return vector<int>(tmp_set.begin(), tmp_set.end());
}
#endif //LEETCODE_40_GETLEASTNUMBERS_H
