class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5