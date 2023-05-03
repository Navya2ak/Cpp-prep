class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int m=n;
        int i;
        for(i=0;i<n;i++)
        {
          if(i<n)
          { 
             int s=((n-i));
             cout<<setw(0);
            for(int j=0;j<=i;j++)
            {
                cout<<"* ";
            }
            cout<<setw(s);
            cout<<endl;
              
          }
        }
            if(i==n)
            {
                for(int k=n-2;k>=0;k--)
                {
                     int s=((n+1)-k);
                     cout<<setw(0);
                    for(int l=0;l<=k;l++)
                    {
                     cout<<"* ";
                    }
                     cout<<setw(s);
                    cout<<endl;
                }
            }
        
        
        
    }
};



// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *