class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            {
              cout<<i<<" ";  
            }
            cout<<endl;
        }
        
    }
};

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5