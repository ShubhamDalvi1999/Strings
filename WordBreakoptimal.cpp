//this helper function avoids calculating if the word is break at a point where, the previous word is in dict,
//it checks if the string after it is available in dict or not
// so it does repetative calculation
//to avoid it use dp

class Solution {
public:
    int dp[301];
    int helper(int i,string s, set<string> wordDict)
    {
        int len=s.size();
        if(i==s.size()) return 1;
        
        if(dp[i]!=-1)
            return dp[i];
        string temp;
        for(int j=i;j<len;j++)
        {
            temp+=s[j];
            if( wordDict.find(temp)!= wordDict.end() )
            {
                if(helper(j+1,s,wordDict))
                    return dp[i]=1;
            }
        }
        return dp[i]=0;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
       set<string> s1;
        memset(dp,-1,sizeof dp );
        for(auto s: wordDict)
        {
            s1.insert(s);
        }
        return helper(0,s,s1);
    }
};