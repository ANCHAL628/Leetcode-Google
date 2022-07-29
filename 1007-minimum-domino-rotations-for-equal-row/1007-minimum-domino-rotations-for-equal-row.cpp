class Solution {
    //
    int countSwaps(vector<int> &vec,int num){
        int tempCnt=0;
        for(int i=0;i<vec.size();i++){
            if(vec[i]!=num) tempCnt++;
        }
        return tempCnt;
    }
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int cnt1=1,cnt2=1;
        int n=tops.size();
        for(int i=1;i<n;i++){
            if(tops[i]==tops[0] || bottoms[i]==tops[0])
                cnt1++;
            if(bottoms[i]==bottoms[0] || tops[i]==bottoms[0])
                cnt2++;
        }
        if(cnt1!=n && cnt2!=n)
            return -1;
        int cnt=INT_MAX;
        if(cnt1==n)
            cnt=min({cnt,countSwaps(tops,tops[0]),countSwaps(bottoms,tops[0])});
        if(cnt2==n)
            cnt=min({cnt,countSwaps(bottoms,bottoms[0]),countSwaps(tops,bottoms[0])});
        return cnt;
    }
};