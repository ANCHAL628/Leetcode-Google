class Solution {
public:
    int expressiveWords(string s, vector<string>& words) {
        vector<pair<char,int>> v;
        int cnt=1,i=1,ans=0,res=0;
        for( i=1;i<s.length();i++){
            if(s[i] == s[i-1]){
                cnt++;
            }
            else{
                v.push_back({s[i-1],cnt});
                cnt=1;
            }
        }
        v.push_back({s[i-1],cnt});

        for(auto i : words){
            int t=0;
            int j;
          
            for( j=0;j<i.length();j++){
                int count =1;
                bool flag = true;
                for(int k=j+1;k<i.length();k++){    // checking for consecutive same elements and increamenting their count.
                    if(i[j]==i[k])
                        count++;
                    else{
                        j = k-1;
                        flag = false;
                        break;
                    }
                }
                if(flag == true){   // If we have last 2 or more elements same then we never go in else condition. Therefore, we maintain a flag variable and we assign our j index as last index.
                    j = i.length()-1;
                }
             
                
                if(i[j] == v[t].first && (v[t].second == count || (v[t].second >= 3 && count <= v[t].second))){
                    ans++;
                    t++;
                }
                if(t==v.size() && j < i.length()-1 ){
                    break;
                }
                
        }
          
           if(ans == v.size() && j == i.length()){
               
                res++;
                ans =0;
            } 
            else{
                ans =0;
            }
        }
        return res;
    }
};