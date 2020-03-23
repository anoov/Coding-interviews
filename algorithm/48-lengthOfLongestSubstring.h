//
// Created by 孙卓文 on 2020/3/23.
//

#ifndef LEETCODE_48_LENGTHOFLONGESTSUBSTRING_H
#define LEETCODE_48_LENGTHOFLONGESTSUBSTRING_H
int lengthOfLongestSubstring(string s) {
    vector<int> m(128, -1);
    int max_count = 0;
    int start = 0;
    for (int i = 0; i < s.size(); i++) {
        if (m[s[i]] >= start)
            start = m[s[i]]+1;
        m[s[i]] = i;
        max_count = max(max_count, i-start+1);
    }
    return max_count;
}
#endif //LEETCODE_48_LENGTHOFLONGESTSUBSTRING_H
