//
// Created by 孙卓文 on 2020/3/16.
//

#ifndef LEETCODE_11_MINARRAY_H
#define LEETCODE_11_MINARRAY_H
int minArray(std::vector<int>& numbers) {
    if (numbers.empty())
        return -1;
    int length = numbers.size();
    int left = 0;
    int right = length - 1;
    while (left < right) {
        int mid = (left + right)/2;
        if (numbers[mid] > numbers[right]) left = mid + 1;
        else if (numbers[mid] < numbers[right]) right = mid;
        else right--;
    }
    return numbers[left];
}

#endif //LEETCODE_11_MINARRAY_H
