class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s3="";
        int count=word1.length()+word2.length(),j=0,k=0;
        for(int i=0; i<count; i++)
        {
            if(i%2==0 && j<word1.length())
            {
                s3+=word1[j];
                j++;
            } 
                
            else if(k<word2.length())
            {
             s3+=word2[k];
             k++;
            } 
        }
        while(j<word1.length())
        {
            s3+=word1[j];
            j++;
        }
         while(k<word2.length())
        {
            s3+=word2[k];
            k++;
        }
        return s3;
    }
};