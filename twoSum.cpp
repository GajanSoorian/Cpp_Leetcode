// Example program
#include <iostream>
#include <string>
#include <vector> 
#include <unordered_map> 

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int,int> nums_with_indexes;
        int  complement;
        for(int i =0; i<nums.size();i++)
        {
            complement=target-nums[i];
            if(nums_with_indexes.find(complement) != nums_with_indexes.end())
            {
             std::vector<int> result; 
             result.push_back(i);
             result.push_back(nums_with_indexes[complement]);
             return result;
            }
            nums_with_indexes[nums[i]]=i;   
        }
    }
};

int main()
{
Solution sol;
std::vector<int> nums={2,5,6,8,9};
std::vector<int> result;
result=sol.twoSum(nums,7);

for(auto x: result)
    std::cout<<x<<" ";
}
