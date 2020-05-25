#include<iostream>
#include<string>
#include<unordered_map>

// Sort both strings and compare (hash function?)nlogn?
// add to a map and check if entries exist. O(n). Better yet, just an array of size 128 (ASCII)
//extended ASCII is 256.
bool isPermutation(std::string inputA, std::string inputB)
{
    std::unordered_map<char,int> charPlaceholder;
    if(inputA.length() != inputB.length())
    {
        return false;
    }
    for (auto x : inputA)
    {   std::cout<<"char is "<<x<<std::endl;
        charPlaceholder[x] += 1;
    }
    std::cout<<std::endl;
    for (auto x : inputB)
    {
        std::cout<<"char is "<<x<<std::endl;
        charPlaceholder[x] -= 1;
    }
    for (auto& x:charPlaceholder) 
        {
            if (x.second != 0)
                return false;
        }
        return true;
}

int main()
{
    std::cout<<isPermutation(" gajan","aajng ")<<std::endl;
}