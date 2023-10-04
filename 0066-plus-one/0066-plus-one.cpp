class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int temp;
       if( digits[n-1]!=9)
       {
           digits[n-1]++;
           return digits;
       }
       else{
           if(n==1)
           {
               digits[n-1]=1;
               digits.push_back(0);
               return digits;
           }
           else{
               for(int i=n-1-1; i>=0; i--)
               {
                   if(digits[i]!=9)
                   {
                       digits[i]++;
                       temp=i;
                       for(int j=temp+1; j<n;j++)
                       {
                          digits[j]=0; 
                       }
                       
                       return digits;
                   }

               if(i==0)
               {
                   digits[i]=1;
                   digits.push_back(0);
                   for(int k=1; k<n; k++)
                   {
                       digits[k]=0;
                   }
                   return digits;
               }
               }
           }
       }
       return digits;
    }
};