#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
        
         map <char,int> ele_count;
        int ans=-1;
        
        for(int i=0; i<s.length(); i++)
        {
           ele_count[s[i]]++;
        }
        
        for(int i=0; i< s.length(); i++)
        {
            if(ele_count[s[i]]==1)
            {      
                return i;
            }
        }
        
        return ans;
        
}

int main()
{
    string s="aabb";
    cout<<" First Unique Character is :"<< firstUniqChar(s);
    return 0;
}        