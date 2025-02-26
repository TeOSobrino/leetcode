class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {

        unordered_map<int, int> complementary; // <number, position>
        for(int i = 0; i < nums.size(); i++){
            int x = nums[i];
            int comp_x = target - x;
            auto it = complementary.find(comp_x);

            if(it != complementary.end()){
                return vector{i, it->second};
            }
            complementary[x] = i;
        }
        exit(1); //should never happen
    }
};