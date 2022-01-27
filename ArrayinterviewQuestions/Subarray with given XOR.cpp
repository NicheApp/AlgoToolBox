//solution - https://www.youtube.com/watch?v=lO9R5CaGRPY&list=PLgUwDviBIf0p4ozDR_kJJkONnb1wdx2Ma&index=26
//problem link - https://www.interviewbit.com/problems/subarray-with-given-xor/

int Solution::solve(vector<int> &A, int B) {
    int x=0;
    int n= A.size();
    int count=0;
    unordered_map<int,int>ump;
    for(int i=0;i<n;i++){
        x=x^A[i];
        if(x==B)count++;
        if(ump.find(x^B)!=ump.end()){
            count+=ump[x^B];
        }
      
      ump[x]++;

    }
    return count;
}
