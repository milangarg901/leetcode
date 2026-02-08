/*
LeetCode 1. Two Sum
Approach:
- Traverse array once and store seen value -> index in hash map.
- For each nums[i], check whether (target - nums[i]) was seen.
- If found, return stored index and current index.

Time Complexity: O(n)
Space Complexity: O(n)
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int need = target - nums[i];
            if(mp.find(need) != mp.end()){
                return {mp[need], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
