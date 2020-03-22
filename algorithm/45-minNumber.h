//
// Created by 孙卓文 on 2020/3/22.
//

#ifndef LEETCODE_45_MINNUMBER_H
#define LEETCODE_45_MINNUMBER_H
static bool compare(const int &x, const int &y) {
    string str_x_y = to_string(x) + to_string(y);
    string str_y_x = to_string(y) + to_string(x);
    return str_x_y < str_y_x;
}
string minNumber(vector<int>& nums) {
    if (nums.empty()) return "";
    sort(nums.begin(), nums.end(), compare);
    for (const auto elem: nums)
        cout << elem << " ";
    cout << endl;
    string ret = to_string(nums[0]);
    auto iter = nums.begin()+1;
    for (;iter != nums.end(); ++iter) {
        ret += to_string(*iter);
    }
    return ret;
}

#endif //LEETCODE_45_MINNUMBER_H
