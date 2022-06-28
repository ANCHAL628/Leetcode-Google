class Solution {
public:
        int numUniqueEmails(vector<string>& emails) {
        set<string>s;
        for(auto x: emails)
        { 
            string temp="";
            for(auto y: x)
            {
                if(y!='+' and y!='@' and y!='.' )
                    temp+=y;
                if(y=='+' or y=='@')
                    break;
            }
         size_t f=x.find('@');
         for(auto it=x.begin()+f; it!=x.end(); it++)
             temp+= *it;
             s.insert(temp);
        }
       
        return s.size();
    

    }
};