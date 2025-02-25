#include <unordered_map>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        std::unordered_map<int, int> map_contains;
    
        for(int i = 0; i < nums.size(); i++){
            int x = nums[i];
            if(map_contains.count(x) != 0)
                return true;
            map_contains[x] = x;
        }
        return false;
    }
};