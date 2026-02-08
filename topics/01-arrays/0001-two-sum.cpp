#include <bits/stdc++.h>
using namespace std;

/*
LeetCode 1. Two Sum
https://leetcode.com/problems/two-sum/

Approach:
- Iterate once through the array.
- For each value x, look for (target - x) in a hash map.
- If found, return the stored index and current index.

Time: O(n)
Space: O(n)
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> index_of;
        for (int i = 0; i < (int)nums.size(); ++i) {
            int need = target - nums[i];
            auto it = index_of.find(need);
            if (it != index_of.end()) {
                return {it->second, i};
            }
            index_of[nums[i]] = i;
        }
        return {};
    }
};
