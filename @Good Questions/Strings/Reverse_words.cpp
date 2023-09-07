// https://leetcode.com/problems/reverse-words-in-a-string/description/

class Solution {
public:
    string reverseWords(string s) {
         string temp="";
        int n=s.size()-1;
        for(int i=n;i>=0;i--){
            if(s[i]==' '){
                for(int j=i+1;s[j]!='\0';j++){
                    temp.push_back(s[j]);
                }
                if(s[i+1]!='\0'){
                temp.push_back(' ');}
                s[i]='\0';
            }
            else if(i==0){
              for(int j=i;s[j]!='\0';j++){
                    temp.push_back(s[j]);
                }
            }
        }
   
        if(temp[temp.size()-1]==' '){
            temp.pop_back();
        }
        return temp;
    }
};
