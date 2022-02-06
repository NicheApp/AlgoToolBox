void lpsfunc(string pat,vector<int> &lps){
        int i=1;
        int len=0;
        lps[0]=0;
        int m=pat.length();
        while(i<m){
            
        if(pat[i]==pat[len]){
            len++;
            lps[i]=len;
            i++;
           
        }
        else{
            
            if(len!=0){
                
                len=lps[len-1];
            }
            else{
               
                lps[i]=0;
                 i++;
                
            }
            
        }    
     }
        
        
    }
        vector <int> search(string pat, string txt){
            //code hee.
            
            int i=0,j=0;
         
            int n=txt.length();
            int m=pat.length();
            vector<int>v;
            vector<int>lps(m,0);
            lpsfunc(pat,lps);
            while(i<n){
                
                if(txt[i]==pat[j]){
                    
                    i++;
                    j++;
                    
                }
                
                if(j==m){
                    
                    v.push_back(i-j+1);
                    j=lps[j-1];
                }
                else if(i<n && txt[i]!=pat[j]){
                    
                    if(j!=0){
                        
                        j=lps[j-1];
                       
                    }
                    else{
                        
                       i++; 
                    }
                    
                    
                }
                
            }
            
            
            return v;
        }
