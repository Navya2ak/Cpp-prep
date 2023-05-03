class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    for(int i=n;i>0;i--)
	    {
            int s=((n+1)-i);
            cout<<setw(s);
	        for(int j=0;j<i+(i-1);j++)
	        {
	            cout<<"*";
	        }
	       cout<<setw(s);
            cout<<endl;

	    }
	}
};

// *********
//  *******
//   *****
//    ***
//     *