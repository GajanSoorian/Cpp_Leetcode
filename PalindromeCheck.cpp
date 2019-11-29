// Example program
#include <iostream>
#include <string>
#include <cctype>

class Solution {
public:
    bool isPalindrome(std::string s) {
        bool result=true;
        for(int i=0, j=s.length()-1;i<j;i++,j--)
        {
            
            while(!(isalnum(s[i])))
                {
                    i++; 
                if(i>=j)
                    break;
                }
            while(!(isalnum(s[j])))
                {
                    j--;
                if(i>=j)
                    break;
            }
//                                                   std::cout<<"s[ "<<i<<" ] "<<s[i]<<" ; s[ "<<j<<"] = "<<s[j]<<std::endl;
            if(isalnum(s[j]) && isalnum(s[j])){
                if (std::tolower(s[i])==std::tolower(s[j]))
                {
                    continue;
                    }
                else
                {
                    result = false;
                    break;
                }
            }
            }
        
        return result;
    }
};

int main()
{

Solution sol;

std::string s="\"Sue,\" Tom smiles, \"Selim smote us.\"";
std::cout<<sol.isPalindrome(s);

}
