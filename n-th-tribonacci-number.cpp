class Solution {
public:
    int tribonacci(int N) {
         if(N==0)
             return 0;
        else if(N==1||N==2)
            return 1;
        else  
        {
            long int tn;
            long int t0=0,t1=1,t2=1;
            for(int i=3;i<=N;i++)
            {
                tn=t0+t1+t2;
                t0=t1;
                t1=t2;
                t2=tn;
            }
            return tn;
        }
        
    }
};
