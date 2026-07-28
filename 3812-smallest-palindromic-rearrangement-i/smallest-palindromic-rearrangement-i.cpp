class Solution {
public:
    string smallestPalindrome(string s) {
        // if(s.size()==1) return s;
        vector<int> mp(26,0);
        for(char ch:s){
            mp[ch-'a']++;
        }
        string firsthalf="";
        char middle=0;
        for(int i=0;i<26;i++){
            firsthalf.append(mp[i]/2,char('a'+i));
            if(mp[i]%2==1){
                middle=char('a'+i);
            }
        }
        string secondhalf=firsthalf;
        reverse(secondhalf.begin(),secondhalf.end());
        if(middle==0){
            return firsthalf+secondhalf;
        }
    return firsthalf+middle+secondhalf;
    }
};