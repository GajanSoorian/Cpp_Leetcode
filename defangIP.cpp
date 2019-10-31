#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
       
   int pos=address.find_first_of('.');
   while(pos!=string::npos){
       address.insert(pos,"[");
       address.insert(pos+2,"]");
       pos=address.find_first_of('.',pos+2);
   }
   return address;
}
};

int main()
{
    Solution sol1;
    cout<<sol1.defangIPaddr("10.1.1.1");
    return 0;
}
