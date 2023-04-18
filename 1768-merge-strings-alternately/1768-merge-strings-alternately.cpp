class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string w;
        int z=max(word1.size(),word2.size());
        for(int i=0;i<z;i++){
                if(i>=word1.size()){
                        w.push_back(word2[i]);
                }
                else if(i>=word2.size()){
                        w.push_back(word1[i]);
                }
                else{
                        w.push_back(word1[i]);
                        w.push_back(word2[i]);
                }
        }
            return w;
    }
};