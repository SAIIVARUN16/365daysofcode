class Solution {
public:
    bool isVowel(char ch){
        if(ch=='a' || ch=='A' || ch=='e' ||ch=='E' || ch=='I' || ch=='i' ||ch=='u' ||ch=='U' || ch=='o' ||ch=='O')
            return true;
        return false;
    }
    string sortVowels(string s) {
        vector<char>v;
        for(char ch:s){
            if(isVowel(ch)){
               v.push_back(ch); 
            }
        }
        sort(v.begin(),v.end());
        int i=0,j=0;
        for(char c:s){
            if(isVowel(c)){
                s[j]=v[i];
                i++;
            }
            j++;
        }
        return s;
    }
};