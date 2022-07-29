//using set does not cover all tc's so use 1 map instead with proper logic

bool isAnagram(string s, string t) {
        map<char, int> s1;
        map<char, int> t1;
        
        if(s.length()==t.length())
        {
            for(char c:s)
            {
                s1[c]++;
            }
        
            for(char c:t)
            {
                s1[c]--;
            }
            
            
            for (const auto& keyValue : s1)
            {
               if(keyValue.second != 0)
                return false;
            }
            return true;
           
        }
        return false;
    }