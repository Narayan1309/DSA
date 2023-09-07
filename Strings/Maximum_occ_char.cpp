//   https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1
//  Maximum occuring character in string(only lowercase)

  char getMaxOccuringChar(string str)
    {
        int arr[26]={0};  //it's imp to initialise arr with 0 otherwise it will have garbage value so answer will be wrong
        for(int i=0;i<str.size();i++){
            char ch=str[i];
            int number=ch-'a';
            arr[number]++;
        }
        int maxi=0;
        int ans;
        for(int i=0;i<26;i++){
            if(maxi<arr[i]){
                maxi=arr[i];
                ans=i;
            }
        }
        char finalans='a'+ans;
        return finalans;
    }

};




// if upper case is also in input but treat them as lowercase in counting

 char getMaxOccuringChar(string str)
    {
        int arr[26]={0};  //it's imp to initialise arr with 0 otherwise it will have garbage value so answer will be wrong
        for(int i=0;i<str.size();i++){
            char ch=str[i];
          if(ch>='a'&&ch<='z'){
            int number=ch-'a';
          }
          else{
            int number=ch-'A';
          }
            arr[number]++;
        }
        int maxi=0;
        int ans;
        for(int i=0;i<26;i++){
            if(maxi<arr[i]){
                maxi=arr[i];
                ans=i;
            }
        }
        char finalans='a'+ans;
        return finalans;
    }

};
