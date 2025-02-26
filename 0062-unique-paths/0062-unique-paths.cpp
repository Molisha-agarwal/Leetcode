class Solution {
public:
    int uniquePaths(int m, int n){ 
        //nCr combination m=3 and n=2
        int N=m+n-2; //N=3
        int r=m-1; //m is columns and n is rows r=2
        double res=1;
        for(int i=1;i<=r;i++)
           res=res*(N-r+i)/i;
           
        
        return res;
         
      }
};