 long long mod =1000000007;
    long long fastexpo(long long pow,long long base)
    {   long long res=1;
        while(pow>0){
        if(pow&1)
        {
            res=(res*base)%mod;
        }
        
     base=(base*base)%mod;
     pow=pow>>1;
        }
     return res;
                    
    }
