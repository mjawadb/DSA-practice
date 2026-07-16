class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
//      buat map
        unordered_map<int, int> myMap;
        for(int i = 0; i < nums.size(); ++i)
        {
            int num = nums[i];
            int complement = target - num;
            auto it = myMap.find(complement);
            if(it != myMap.end())
            {
                return {it->second, i};
            }
            
            myMap[num] = i;
        }
        return {};
    }
};