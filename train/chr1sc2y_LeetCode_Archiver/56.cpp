#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool operator<(const Interval &interval1, const Interval &interval2) {
    return interval1.start < interval2.start;
}


struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

class Solution {
public:
    vector<Interval> merge(vector<Interval> &intervals) {
        vector<Interval> ret;
        sort(intervals.begin(), intervals.end());
        for (int i = 0; i < intervals.size(); ++i) {
            if (ret.empty() || ret.back().end < intervals[i].start)
                ret.push_back(intervals[i]);
            else
                ret.back().end = max(ret.back().end, intervals[i].end);
        }
        return ret;
    }
};
