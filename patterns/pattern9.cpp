class Solution {
  public:
    void printDiamond(int n) {
        int m=n;
        for(int i=0;i<=n;i++)
        {
            int s=((n+1)-i);
            cout<<setw(s);
            for(int j=0;j<=i;j++)
            {
                cout<<"*";
            }
            cout<<setw(s);
            cout<<endl;
            if(i==n)
            {
                
                for(int k=n;k>=0;k--)
                {
                     int s=((n+1)-k);
                    cout<<setw(s);
                    for(int l=0;l<=k;l++)
                    {
                        cout<<"*";
                    }
                     cout<<setw(s);
                    cout<<endl;
                }
            }
        }
        
        
    }
};


//      *
//     **
//    ***
//   ****
//  *****
// ******
// ******
//  *****
//   ****
//    ***
//     **
//      *