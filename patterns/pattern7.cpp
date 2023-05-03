class Solution {
  public:
  int s;
    void printTriangle(int n) {
        for(int i=0;i<n;i++)
        {
            int s=((n)-i);
            cout<<setw(s);
            for(int j=0;j<i+(i+1);j++)
            {
                cout<<"*";
            }
            cout<<setw(s);
            cout<<endl;
        }
    }
};

//     *
//    ***
//   *****
//  *******
// *********