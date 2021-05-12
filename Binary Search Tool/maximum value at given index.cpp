
class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
       long long  leftlen=index,rightlen=n-(index+1),ans=0,start=1,end=maxSum,mid,sum,r;
        while(start<=end)
        {
            mid=(start+end)/2;//mid=5;
            long long ls=0,rs=0;
            sum=mid;
            if(mid!=1)
            r=mid-1;
            else
              r=mid;
         
            
            if((r-rightlen)>=0)
            
                rs= (r*(r+1))/2-((r-rightlen)*(r-rightlen+1))/2;
            else
                rs=(r*(r+1))/2+(rightlen-r);
            
            if((r-leftlen)>=0)
                 ls= (r*(r+1))/2-((r-leftlen)*(r-leftlen+1))/2;
            else
                 ls=(r*(r+1))/2+leftlen-r;
            sum+=ls+rs;
            
            if(sum<=maxSum)
            {
                 
                
                ans=mid;
                start=mid+1;
               
            }
            else
            {
                
                end=mid-1;
            }
        }
        return ans;
        
    }
};
