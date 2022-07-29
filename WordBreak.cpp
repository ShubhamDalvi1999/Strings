class Solution {
public:
    int helper(int i,string s, set<string> wordDict)
    {
        int len=s.size();
        if(i==s.size()) return 1;
        
        string temp;
        for(int j=i;j<len;j++)
        {
            temp+=s[j];
            if( wordDict.find(temp)!= wordDict.end() )
            {
                if(helper(j+1,s,wordDict))
                    return 1;
            }
        }
        return 0;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
       set<string> s1;
        for(auto s: wordDict)
        {
            s1.insert(s);
        }
        return helper(0,s,s1);
    }
};