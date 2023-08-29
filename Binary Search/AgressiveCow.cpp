//https://www.codingninjas.com/studio/problems/aggressive-cows_1082559?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1
//codestudio aggressive cow problem
bool ispossible(vector<int> &stalls, int k,int mid){
    int cowcount=1;
    int positionoflastcowplaced=stalls[0];
    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-positionoflastcowplaced>=mid){
            cowcount++;
            if(cowcount==k){return true;}
            positionoflastcowplaced=stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int s=0;
    int n=stalls.size();
    int e=stalls[n-1];
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(ispossible(stalls,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
