class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int k = 0;
        int freq[1000]; 
        
        sort(arr.begin(), arr.end());
        int count = 1;

        for(int i=1; i<arr.size(); i++){
            if(arr[i] == arr[i-1]){
                count++;
            }
            else{
                freq[k] = count;
                k++;
                count = 1;
            }    
        }
        freq[k] = count;
        k++;


        for(int i=0; i<k; i++){
            for(int j=i+1; j<k; j++){
                if(freq[j]==freq[i]){
                    return false;
                }
            }
        }
        return true;
    }
};