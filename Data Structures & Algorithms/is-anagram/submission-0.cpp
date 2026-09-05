class Solution {
public:
    bool isAnagram(string s, string t) {
       vector<int>count(26,0);
       for(char ch : s){
        int sindex =  ch - 'a';
        count[sindex]++;
       }
       
       for(char ch : t){
        int tindex =  ch - 'a';
        count[tindex]--;
       }
       for(int num : count){
        if (num != 0){
            return false;
        }
       }
       return true;



    }
};
