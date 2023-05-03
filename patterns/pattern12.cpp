class Solution {
  public:
    void printTriangle(int n) {
        // code here
       string s;
       string temp; 
        for(int i=1;i<=n;i++)
        {
           if(i==1)
           {
             s=s.replace(0,1,"1 "+s);  
           }
           if(i>1)
           {
               if(i%2==0)
               {
                  temp ="0 "+s;
                  s=s.replace(0,temp.length(),temp);  
               }
                 if(i%2!=0)
               {
              temp ="1 "+s;
                  s=s.replace(0,temp.length(),temp);                       
               }
           }
           cout<<s;
           cout<<endl;
        }
        
    }
};

// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1