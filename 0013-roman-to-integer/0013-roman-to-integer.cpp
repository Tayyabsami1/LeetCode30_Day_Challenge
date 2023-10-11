class Solution {
public:
    int romanToInt(string s) {
        int Num=0;

        for(int i=0; i<s.length(); i++)
        {
            if((s[i]=='I') && (s[i+1]=='X') )
            {
                Num+=9;
                i++;
                continue;
            }

             if((s[i]=='I') && (s[i+1]=='V') )
            {
                Num+=4;
                i++;
                continue;
            }

            if(s[i]=='I')
            {
                Num+=1;
                continue;
            }

             if((s[i]=='X') && (s[i+1]=='L') )
            {
                Num+=40;
                i++;
                continue;
            }

             if((s[i]=='X') && (s[i+1]=='C') )
            {
                Num+=90;
                i++;
                 continue;
            }

            if(s[i]=='X')
            {
                Num+=10;
                 continue;
            }

            if(s[i]=='V')
            {
                Num+=5;
                 continue;
            }
               if(s[i]=='L')
            {
                Num+=50;
                 continue;
            }

            
             if((s[i]=='C') && (s[i+1]=='D') )
            {
                Num+=400;
                i++;
                continue;
            }

            
             if((s[i]=='C') && (s[i+1]=='M') )
            {
                Num+=900;
                i++;
                 continue;
            }

               if(s[i]=='C')
            {
                Num+=100;
                 continue;
            }

               if(s[i]=='D')
            {
                Num+=500;
                continue;
            }

               if(s[i]=='M')
            {
                Num+=1000;
                continue;
            }
        }

        return Num;
        
    }
};