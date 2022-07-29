#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicateLetters(string s) {
            
    unordered_map<char, int> lastidx; 
    int n = s.size();
    vector<int> vis(26, 0); 
    vector<char> st; 
        
    for(int i=0; i<n; ++i) 
        lastidx[s[i]] = i; 
    
    
    for(int i = 0; i < n; ++i){
        
        if(vis[s[i] - 'a']) 
            continue;
        
        else{

            //remove the character only if it is greater than current char and it is available in the string going forward
            while(!st.empty() and st.back() > s[i] and lastidx[st.back()] > i)
            {   
                //debug
                if(st.empty())
                {
                    cout<<"st is empty";
                }
                else
                {
                    cout<<"st is inside while: ";
                    for(auto i: st)
                        cout<<i<<" ";
                    cout<<"i value is :"<<i;
                    cout<<endl;
                }
                
                
                vis[st.back() - 'a'] = 0; 
                st.pop_back();
            }
            st.push_back(s[i]);
            vis[s[i] - 'a'] = 1;

            //debug
            // cout<<"st is now: ";
            // for(auto i: st)
            //     cout<<i<<" ";
            // cout<<"i value is :"<<i;
            // cout<<endl;
        }
    }
	// At last, stack contains the required string, so just iterate over it and store ans in string and return.
    string ans;
    for(auto c: st) ans += c;
	
    return ans;
    }
};

int main()
{
    string stri ="cbacdcbc";
    Solution s;
    string ans = s.removeDuplicateLetters(stri);
    cout<<"ans is :"<<ans;
}