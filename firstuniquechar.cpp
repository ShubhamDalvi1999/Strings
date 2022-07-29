#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
        
        char chr_arr[s.length()];
        map<char, int > ele_count;
        int ans=-1;
   
        strcpy(chr_arr,s.c_str()); 
       // cout<<"Size of chr_arr "<<sizeof(chr_arr)<<" ";
        
        for(char c:chr_arr)
        {
            // if ( ele_count.find(c) != ele_count.end() ) 
            // {
            //     ele_count[c]+=1;
            // }
            // else
            //     ele_count.insert( {c,1} );
                ele_count[c]++;
        }
        
        for(int index=0; index< sizeof(chr_arr); index++)
        {
            if(ele_count[chr_arr[index]]==1)
            {    
                return index ;
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