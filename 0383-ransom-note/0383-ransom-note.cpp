class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> count(26,0);
        vector<int> count2(26,0);

        for(int i=0; i<ransomNote.size(); i++){
            count[ransomNote[i]-'a']++;
        }

        for(int i=0; i<magazine.size(); i++){
            count2[magazine[i]-'a']++;
        }

        for(int i=0; i<26; i++){
            if(count[i] > count2[i]){
                return false;
            }
        }
        return true;
    }
};