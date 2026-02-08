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
