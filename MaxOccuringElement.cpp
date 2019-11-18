/*class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::map<int,int> numBucket;
        
        for(int x: nums)
        {
            numBucket[x]+=1;
            if(numBucket[x] > (nums.size()/2))
            {
                return x;
            }
        }
        return -1;
    }
};

*/
//Boyer-Moore majority voting Algo
/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int maxElement=0;
    short counter=0;
        for(int x: nums)
        {
           if(maxElement==x)
               counter++;
            else{
                if(counter==0)
                {
                    maxElement=x;
                    counter=1;
                }
                else
                    counter--;
            }
      }
        return maxElement;
    }
};

*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = 0;
        for (unsigned int i = 0, mask = 1; i < 32; i++, mask <<= 1) {
            int bits = 0;
            for (int num : nums) {
                if (num & mask) {
                    bits++;
                }
            }
            if (bits > nums.size() / 2) {
                majority |= mask;
            }
        }
        return majority;
    }
};
