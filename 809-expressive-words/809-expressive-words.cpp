// 1. Idea : firstly we count the frequencies of every elements of given string and stored in vector.
// 2. Then we traverse through every string of words and compare the last index of every similar element with the frequency vector. If it's frequency is equal to number of time it appears in ith string or it is more than 3 then increament our ans variable and do check for next element.
// 3. After complete iteration in the ith string we check if our ans count == vector v.size() then we increament our res variabl e by one.
    
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