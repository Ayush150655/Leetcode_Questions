class Solution {
public:
    string largestMerge(string word1, string word2) {
        string merge = "";
        int i=0;
        int j=0;
        while(i < word1.length() && j < word2.length()){
            if(word1[i] > word2[j]){
                merge += word1[i];
                i++;
            }
            else if(word2[j] > word1[i]){
                merge += word2[j];
                j++;
            }
            else {
                if(word1.substr(i) > word2.substr(j)){
                    merge += word1[i];
                    i++;
                }
                else{
                    merge += word2[j];
                    j++;
                }
            }
        }
        while(i < word1.length()){
            merge += word1[i];
            i++;
        }
        while(j < word2.length()){
            merge += word2[j];
            j++;
        }
        return merge;
    }
};