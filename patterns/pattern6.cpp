class Solution{
public:
	
	void printTriangle(int n) {
	    for(int i=n;i>0;i--)
	    {
	        for(int j=1;j<=i;j++)
	        {
	            cout<<j<<" ";
	        }
	        cout<<endl;
	    }
	}
};

// 1 2 3 4 5
// 1 2 3 4
// 1 2 3 
// 1 2  
// 1 